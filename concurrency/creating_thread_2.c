#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// need to change return type to void pointer
void task1() {
    for (int i = 0; i < 100; i++) {
        printf("running task 1: %d\n", i);
    }
}

void task2() {
    for (int i = 0; i < 100; i++) {
        printf("running task 2: %d\n", i);
    }
}

int main() {
    // create thread IDs

    // create threads

    // join threads
    return 0;
}
