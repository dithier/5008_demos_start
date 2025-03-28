#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// have task 1 take 1 arg
void* task1() {
    for (int i = 0; i < 100; i++) {
        printf("running task 1: %d\n", i);
    }

    return NULL;
}

// have task 2 take 2 args
void* task2() {
    for (int i = 0; i < 100; i++) {
        printf("running task 2: %d\n", i);
    }

    return NULL;
}

int main() {
    pthread_t threadIDs[2];

    // create vars for args

    pthread_create(&threadIDs[0], NULL, task1, NULL);
    pthread_create(&threadIDs[1], NULL, task2, NULL);

    pthread_join(threadIDs[0], NULL);
    pthread_join(threadIDs[1], NULL);

    return 0;
}
