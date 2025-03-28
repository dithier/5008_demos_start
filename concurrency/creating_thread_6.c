#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_TASKS 1000

int globalCounter = 0;

void* task1() {
    globalCounter++;
    return NULL;
}

int main() {
    pthread_t threadIDs[NUM_TASKS];

    // void* task2Result;
    for (int i = 0; i < NUM_TASKS; i++) {
        pthread_create(&threadIDs[i], NULL, task1, NULL);
    }

    for (int i = 0; i < NUM_TASKS; i++) {
        pthread_join(threadIDs[0], NULL);
    }

    printf("%d\n", globalCounter);

    return 0;
}
