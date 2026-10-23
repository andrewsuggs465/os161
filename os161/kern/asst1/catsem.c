/*
 * catsem.c
 *
 * 30-1-2003 : GWA : Stub functions created for CS161 Asst1.
 *
 * NB: Please use SEMAPHORES to solve the cat syncronization problem in 
 * this file.
 */


/*
 * 
 * Includes
 *
 */

#include <types.h>
#include <lib.h>
#include <test.h>
#include <thread.h>
#include <synch.h>

/*
 * 
 * Constants
 *
 */

/*
 * Number of food bowls.
 */

#define NFOODBOWLS 2

/*
 * Number of cats.
 */

#define NCATS 6

/*
 * Number of mice.
 */

#define NMICE 2

/*
 * Number of times each animal eats. The spec does not fix this.
 */

#define NMEALS 4

/*
 * 
 * Shared state
 *
 */

/*
 * turnstile:   every arriving animal passes through it. An animal waiting
 *              for the room keeps holding it, so the other species cannot
 *              keep cutting in front of it. This is what prevents starvation.
 * room:        held by one species at a time. The first animal of a species
 *              to enter takes it, and the last one out gives it back.
 * cat_mutex:   protects cats_in_room.
 * mouse_mutex: protects mice_in_room.
 * dishes:      counts free dishes, so at most NFOODBOWLS animals eat at once.
 * dish_mutex:  protects dish_used[].
 * done:        each thread V()s it when it finishes, so the driver can wait.
 */

 static struct semaphore *turnstile;
 static struct semaphore *room;
 static struct semaphore *cat_mutex;
 static struct semaphore *mouse_mutex;
 static struct semaphore *dishes;
 static struct semaphore *dish_mutex;
 static struct semaphore *done;

 static int cats_in_room;
 static int mice_in_room;
 static int dish_used[NFOODBOWLS];

/*
 * 
 * Function Definitions
 * 
 */

 /*
 * enter_room()
 *
 * Lightswitch on: the first animal of a species to arrive takes the
 * room, which locks out the other species.
 */

static
void
enter_room(struct semaphore *mutex, int *count)
{
        P(mutex);
        (*count)++;
        if (*count == 1) {
                P(room);
        }
        V(mutex);
}

/*
 * leave_room()
 *
 * Lightswitch off: the last animal of a species to leave gives the room
 * back, so the other species can enter.
 */

static
void
leave_room(struct semaphore *mutex, int *count)
{
        P(mutex);
        (*count)--;
        if (*count == 0) {
                V(room);
        }
        V(mutex);
}

/*
 * take_dish()
 *
 * Waits for a free dish, claims it, and returns its index.
 */

 static
 int
 take_dish(void)
 {
        int i;

        P(dishes);
        P(dish_mutex);
        for (i = 0; i < NFOODBOWLS; i++) {
                if (!dish_used[i]) {
                        dish_used[i] = 1;
                        break;
                }
        }
        V(dish_mutex);

        return i;
 }

 /*
 * release_dish()
 *
 * Marks a dish free and wakes one animal waiting for a dish.
 */

 static
 void
 release_dish(int dish)
 {
        P(dish_mutex);
        dish_used[dish] = 0;
        V(dish_mutex);
        V(dishes);
 }

/*
 * cat_thread()
 *
 * Arguments:
 *      void * unusedpointer: currently unused.
 *      unsigned long catnumber: holds the cat identifier from 0 to NCATS - 1.
 *
 * Returns:
 *      nothing.
 *
 * Notes:
 *      Write and comment this function using semaphores.
 *
 */

static
void
cat_thread(void * unusedpointer,
           unsigned long catnumber)
{
        /*
         * Avoid unused variable warnings.
         */

        (void) unusedpointer;
        int meal, dish;

        for (meal = 0; meal < NMEALS; meal++) {
                P(turnstile);
                enter_room(cat_mutex, &cats_in_room);
                V(turnstile);

                dish = take_dish();
                kprintf("cat %lu begins eating at dish %d\n",
                        catnumber, dish + 1);
                clocksleep(1);
                kprintf("cat %lu finishes eating at dish %d\n",
                        catnumber, dish + 1);
                release_dish(dish);

                leave_room(cat_mutex, &cats_in_room);
        }

        V(done);

}
        

/*
 * mouse_thread()
 *
 * Arguments:
 *      void * unusedpointer: currently unused.
 *      unsigned long mousenumber: holds the mouse identifier from 0 to 
 *              NMICE - 1.
 *
 * Returns:
 *      nothing.
 *
 * Notes:
 *      Write and comment this function using semaphores.
 *
 */

static
void
mouse_thread(void * unusedpointer, 
             unsigned long mousenumber)
{
        /*
         * Avoid unused variable warnings.
         */

        (void) unusedpointer;
        int meal, dish;

        for (meal = 0; meal < NMEALS; meal++) {
                P(turnstile);
                enter_room(mouse_mutex, &mice_in_room);
                V(turnstile);

                dish = take_dish();
                kprintf("mouse %lu begins eating at dish %d\n",
                        mousenumber, dish + 1);
                clocksleep(1);
                kprintf("mouse %lu finishes eating at dish %d\n",
                        mousenumber, dish + 1);
                release_dish(dish);

                leave_room(mouse_mutex, &mice_in_room);
        }

        V(done);
}


/*
 * catmousesem()
 *
 * Arguments:
 *      int nargs: unused.
 *      char ** args: unused.
 *
 * Returns:
 *      0 on success.
 *
 * Notes:
 *      Driver code to start up cat_thread() and mouse_thread() threads.  Change this 
 *      code as necessary for your solution.
 */

int
catmousesem(int nargs,
            char ** args)
{
        int index, error;
   
        /*
         * Avoid unused variable warnings.
         */

        (void) nargs;
        (void) args;
        
        /*
         * Create the shared semaphores before any thread can use them.
         */

         turnstile = sem_create("turnstile", 1);
         room = sem_create("room", 1);
         cat_mutex = sem_create("cat_mutex", 1);
         mouse_mutex = sem_create("mouse_mutex", 1);
         dishes = sem_create("dishes", NFOODBOWLS);
         dish_mutex = sem_create("dish_mutex", 1);
         done = sem_create("done", 0);

         if (turnstile == NULL || room == NULL || cat_mutex == NULL ||
            mouse_mutex == NULL || dishes == NULL || dish_mutex == NULL ||
            done == NULL) {
                panic("catmousesem: sem_create failed\n");
        }
        /*
         * Start NCATS cat_thread() threads.
         */

        for (index = 0; index < NCATS; index++) {
           
                error = thread_fork("catsem Thread", 
                                    NULL, 
                                    index, 
                                    cat_thread, 
                                    NULL
                                    );
                
                /*
                 * panic() on error.
                 */

                if (error) {
                 
                        panic("catsem: thread_fork failed: %s\n", 
                              strerror(error)
                              );
                }
        }
        
        /*
         * Start NMICE mouse_thread() threads.
         */

        for (index = 0; index < NMICE; index++) {
   
                error = thread_fork("mousesem Thread", 
                                    NULL, 
                                    index, 
                                    mouse_thread, 
                                    NULL
                                    );
                
                /*
                 * panic() on error.
                 */

                if (error) {
         
                        panic("mousesem: thread_fork failed: %s\n", 
                              strerror(error)
                              );
                }
        }

        /*
         * Wait for every cat and mouse to finish, then clean up.
         */

        index = 0;
        while(index < NCATS + NMICE) {
                P(done);
                index ++;
        }
        
        sem_destroy(turnstile);
        sem_destroy(room);
        sem_destroy(cat_mutex);
        sem_destroy(mouse_mutex);
        sem_destroy(dishes);
        sem_destroy(dish_mutex);
        sem_destroy(done);

        return 0;
}


/*
 * End of catsem.c
 */
