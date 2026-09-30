# Code Reading

## 4.1 Thread Questions

### 1. What happens to a thread when it exits (i.e., calls `thread_exit()`)? What about when it sleeps?

**Exit** — `thread_exit()`, `os161/kern/thread/thread.c:429`
- Check magic numbers to ensure stack didn't overflow
- Disable interrupts
- If thread has an address space, it sets the current thread's address space to `NULL` and passes the address space to be destroyed.
- If thread has a current working directory, it decreases the directory's reference count and sets it to `NULL`.
- Decreases `numthreads` and switches to zombie mode
- If context switch fails, kernel panic
**Sleep** — `thread_sleep()`, `os161/kern/thread/thread.c:496`

- If it's in an interrupt handler, the thread cannot sleep.
- Sets the current thread's sleep address to the passed address, for where the programmer wants it to be stored.
- Switches context to sleep mode.
- Sets the current thread's sleep address to `NULL`.

### 2. What function(s) handle(s) a context switch?

- `static void mi_switch(threadstate_t nextstate)` — `os161/kern/thread/thread.c:337`
  High-level, machine-independent context switch code.
- `void md_switch(struct pcb *old, struct pcb *nu)` — `os161/kern/arch/mips/mips/pcb.c:118`
  Machine-dependent entry point for a thread context switch.

### 3. How many thread states are there? What are they?

`os161/kern/thread/thread.c:17`

There are four:

1. `S_RUN`
2. `S_READY`
3. `S_SLEEP`
4. `S_ZOMB`

### 4. What does it mean to turn interrupts off? How is this accomplished? Why is it important to turn off interrupts in the thread subsystem code?

`splhigh()` — `os161/kern/arch/mips/mips/spl.c:112`

**How it's accomplished:**
spl stands for "set priority level." `splhigh()` turns off all interrupts on MIPS.

**Why:**
A timer interrupt is the only thing that can take the CPU away from a thread, so turning off interrupts makes a stretch of code run all the way through without another thread cutting in. If there is a race condition where the critical section must be accessed by only one thread at a time, temporarily disabling interrupts prevents errors.

### 5. What happens when a thread wakes up another thread? How does a sleeping thread get to run again?

`thread_wakeup()` — `os161/kern/thread/thread.c:511`

## 4.2 Scheduler Questions

### 6. What function is responsible for choosing the next thread to run?

### 7. How does that function pick the next thread?

### 8. What role does the hardware timer play in scheduling? What hardware-independent function is called on a timer interrupt?

## 4.3 Synchronization Questions

### 9. Describe how `thread_sleep()` and `thread_wakeup()` are used to implement semaphores. What is the purpose of the argument passed to `thread_sleep()`?

### 10. Why does the lock API in OS/161 provide `lock_do_i_hold()`, but not `lock_get_holder()`?
