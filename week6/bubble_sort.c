#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int length) {
    // todo
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print_arr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ,", arr[i]);
    }

    printf("\n");
}

int main() {
    int len = 6;
    int arr[] = {1, 5, 2, 9, 0, 1};
    printf("before\n");
    print_arr(arr, len);

    printf("after\n");
    bubble_sort(arr, len);
    print_arr(arr, len);

    return 0;
}

