#include <stdio.h>

int add(int a, int b) { return 0; }

int main() {
    int* array;
    for (int i = 0; i < 5; i++) {
        array[i] = add(i, 100);
        printf("add(1,100) = %d\n", array[i]);
    }

    return 0;
}
