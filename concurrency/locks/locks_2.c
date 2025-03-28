#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_TASKS 1000

// define global counter

// define mutex

void* task1() {
    for (int i = 0; i < NUM_TASKS; i++) {
        printf("running task 1: %d\n", i);

        // change counter using mutex
    }

    return NULL;
}

void* task2() {
    for (int i = 0; i < NUM_TASKS; i++) {
        printf("running task 2: %d\n", i);

        // change counter using mutex
    }

    return NULL;
}

int main() {
    pthread_t threadIDs[2];

    pthread_create(&threadIDs[0], NULL, task1, NULL);
    pthread_create(&threadIDs[1], NULL, task2, NULL);

    pthread_join(threadIDs[0], NULL);
    pthread_join(threadIDs[1], NULL);

    // print global counter

    return 0;
}
