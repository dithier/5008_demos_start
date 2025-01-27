#include <stdio.h>

int init_func(int* array, int len) {
    for (int i = 1; i <= len; i++) {
        array[i] = i;
    }

    return 0;
}

int main() {
    int* arr = NULL;

    if (init_func(arr, 100) != 0) {
        printf("init error\n");
        return -1;
    }

    return 0;
}
