#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// create macro for total number of tasks

void* task1(void* arg) {
    if (arg == NULL) {
        return NULL;
    }

    int* p_value = (int*)arg;
    int numToRun = *p_value;

    // add to print what thread we are in
    for (int i = 0; i < numToRun; i++) {
        printf("running task 1: %d\n", i);
    }

    return "hello";
}

void* task2(void* arg) {
    if (arg == NULL) {
        return NULL;
    }

    int* array = (int*)arg;
    int numToRun = array[0];
    int sleepTime = array[1];

    for (int i = 0; i < numToRun; i++) {
        sleep(sleepTime);
        printf("running task 2: %d\n", i);
    }

    return NULL;
}

int main() {
    // have NUM_TASKS worth of task 1 run in main
    pthread_t threadIDs[2];

    int numTask1 = 100;
    int t2[2] = {20, 1};

    pthread_create(&threadIDs[0], NULL, task1, &numTask1);
    pthread_create(&threadIDs[1], NULL, task2, t2);

    void* task1Result;
    void* task2Result;

    pthread_join(threadIDs[0], &task1Result);
    pthread_join(threadIDs[1], &task2Result);

    printf("Task1: %s\n", (char*)task1Result);

    return 0;
}
