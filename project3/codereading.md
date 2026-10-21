# Code Reading

## 4.1 Thread Questions

### 1. What happens to a thread when it exits (i.e., calls `thread_exit()`)? What about when it sleeps?

**Exit**, `thread_exit()`, `os161/kern/thread/thread.c:429`
- Checks the magic numbers at the bottom of the stack to make sure it did not overflow.
- Turns interrupts off with `splhigh()`.
- If the thread has an address space (`t_vmspace`), it sets the pointer to `NULL` first, then calls `as_destroy()` on it. Clearing the pointer first avoids a race with the context switch code.
- If the thread has a current working directory (`t_cwd`), it calls `VOP_DECREF()` on it and sets it to `NULL`.
- Decrements `numthreads` and calls `mi_switch(S_ZOMB)`, which puts the thread on the `zombies` array. The rest of the thread (its stack and `struct thread`) is freed later by `exorcise()`.
- `thread_exit()` never returns. If it does, the kernel panics with "Thread came back from the dead!"

**Sleep**, `thread_sleep()`, `os161/kern/thread/thread.c:496`
- Asserts that it is not in an interrupt handler, since a thread cannot sleep there.
- Stores the sleep address `addr` in the thread's `t_sleepaddr`. The address is only a key that `thread_wakeup()` matches against. It is not interpreted.
- Calls `mi_switch(S_SLEEP)`, which adds the thread to the `sleepers` array and switches to the next thread from the scheduler.
- When the thread is woken and runs again, it sets `t_sleepaddr` back to `NULL`.
- Interrupts must already be off when `thread_sleep()` is called.

### 2. What function(s) handle(s) a context switch?

- `static void mi_switch(threadstate_t nextstate)`, `os161/kern/thread/thread.c:337`
  High-level, machine-independent context switch code. It puts the current thread on the run queue, the `sleepers` array, or the `zombies` array depending on `nextstate`, calls `scheduler()` to pick the next thread, then calls `md_switch()`.
- `void md_switch(struct pcb *old, struct pcb *nu)`, `os161/kern/arch/mips/mips/pcb.c:118`
  Machine-dependent code that actually saves the old thread's registers and loads the new thread's.

### 3. How many thread states are there? What are they?

`os161/kern/thread/thread.c:17`

There are four:

1. `S_RUN`: currently running.
2. `S_READY`: runnable, waiting on the run queue.
3. `S_SLEEP`: blocked on a sleep address.
4. `S_ZOMB`: exited, waiting to be cleaned up.

### 4. What does it mean to turn interrupts off? How is this accomplished? Why is it important to turn off interrupts in the thread subsystem code?

`splhigh()`, `os161/kern/arch/mips/mips/spl.c:112`

**What it means:**
While interrupts are off, the CPU does not handle any interrupt, including the timer, until they are turned back on.

**How it's accomplished:**
spl stands for "set priority level." `splhigh()` calls `splx(SPL_HIGH)`, which sets the interrupt priority level to the highest value and masks all interrupts on MIPS. It returns the old level so the caller can restore it with `splx()`.

**Why:**
The timer interrupt calls `hardclock()`, which calls `thread_yield()`, so it can take the CPU away from a thread at any point. The thread subsystem touches shared data such as the run queue and the `sleepers` and `zombies` arrays, and a context switch in the middle of an update would leave them inconsistent. Turning interrupts off makes these critical sections atomic on a single CPU.

### 5. What happens when a thread wakes up another thread? How does a sleeping thread get to run again?

`thread_wakeup()`, `os161/kern/thread/thread.c:511`

`thread_wakeup(addr)` walks the `sleepers` array and, for every thread whose `t_sleepaddr` equals `addr`, removes it from `sleepers` and calls `make_runnable()`, which adds it to the tail of the run queue. The woken thread is in the `S_READY` state but does not run yet. It runs when a later call to `scheduler()` removes it from the head of the run queue and `mi_switch()` switches to it. At that point it returns from `mi_switch()` inside `thread_sleep()`.

## 4.2 Scheduler Questions

### 6. What function is responsible for choosing the next thread to run?

`struct thread *scheduler(void)`, `os161/kern/thread/scheduler.c:88`

### 7. How does that function pick the next thread?

The scheduler is round-robin. It asserts that interrupts are off. While the run queue is empty it calls `cpu_idle()` to wait for an interrupt. Once the queue is non-empty it returns `q_remhead(runqueue)`, the thread that has waited the longest. `make_runnable()` adds threads at the tail, so threads run in the order they became ready.

### 8. What role does the hardware timer play in scheduling? What hardware-independent function is called on a timer interrupt?

`hardclock()`, `os161/kern/thread/hardclock.c`

The timer interrupts `HZ` times a second and each interrupt calls `hardclock()`. Every call ends with `thread_yield()`, which puts the running thread at the back of the run queue and runs the next one, so the timer is what makes scheduling preemptive. Once every `HZ` ticks (once per second), `hardclock()` also calls `thread_wakeup(&lbolt)`, which wakes threads sleeping in `clocksleep()`.

## 4.3 Synchronization Questions

### 9. Describe how `thread_sleep()` and `thread_wakeup()` are used to implement semaphores. What is the purpose of the argument passed to `thread_sleep()`?

`os161/kern/thread/synch.c`

`P()` turns interrupts off, then loops `while (sem->count == 0) thread_sleep(sem);`. After the loop it decrements `count` and restores interrupts. `V()` turns interrupts off, increments `count`, calls `thread_wakeup(sem)`, and restores interrupts. The `while` loop rechecks the count because several threads may be woken at once and only one of them can take the new count.

The argument to `thread_sleep()` is the sleep address, a key that identifies what the thread is waiting for. `thread_wakeup()` wakes only the threads sleeping on the same address. The semaphore passes its own address, so `V(sem)` wakes only threads blocked in `P(sem)` and not threads waiting on other semaphores. The value is never dereferenced.

### 10. Why does the lock API in OS/161 provide `lock_do_i_hold()`, but not `lock_get_holder()`?

`lock_do_i_hold()` asks about the calling thread only, and the answer cannot change while that thread is running: nobody else can acquire or release a lock the caller holds. `lock_get_holder()` would return a snapshot that another thread could invalidate right after the call, so the caller could not rely on it. It would also encourage code that makes decisions based on who owns the lock instead of just acquiring it. `lock_do_i_hold()` is enough for the real uses, such as asserting in `lock_release()` that only the holder releases the lock.
