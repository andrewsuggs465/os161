# Project 4 Exercises (Option 1, Semaphores)

## 1. Avoiding Starvation

The solution uses semaphores for three things: a room that only one species can hold at a time, a turnstile in front of the room, and a counting semaphore for the two dishes. Each species uses a lightswitch on the room, so the first cat in takes the room and the last cat out gives it back, and the mice do the same with their own counter. This keeps a cat and a mouse from eating at the same time, but on its own it lets one species starve the other, because if cats keep arriving before the last cat leaves, the room is never released.

The turnstile fixes this problem. Every animal passes through it before entering the room. When a mouse arrives while cats are eating, it takes the turnstile and then waits on the room while still holding it, so a new cat blocks at the turnstile instead of joining the cats already eating. Once those cats finish, the last one gives up the room and the mouse gets in. The same thing happens the other way when a cat arrives while the mice are eating. With `seed=1`, all 6 cats and both mice ate 4 times each.


## 2. Experience and Principles

The design was straightforward, most of the time went into small mistakes the compiler cannot catch. The first version released a dish by calling `V()` on the dish mutex twice instead of once on the mutex and once on the dish count. The dishes were never given back, so after two animals ate everyone else blocked, and the mutex count went up to 2 so it no longer gave mutual exclusion. The mice also printed their begin and finish lines outside the time they held the dish, so the output showed two animals at the same dish even though the locking was correct. Setting the random seed in `sys161.conf` made every run the same, so each fix was easy to check.

So, every `P()` needs a matching `V()` on the same semaphore, and a missing or doubled `V()` shows up later as a deadlock instead of right away. Each semaphore should have one job: mutual exclusion (starts at 1), counting a resource (starts at the number of resources), or signaling (starts at 0). Taking the semaphores in the same order in every thread prevents a circular wait. Mutual exclusion and fairness are separate problems, and fairness needed its own semaphore. Critical sections should be short, so no mutex is held while an animal is eating.
