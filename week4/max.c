#include <stdio.h>

int find_and_return_max(int* arr, int len, int max) {
    if (arr == NULL || len <= 0) {
        return -1;
    }

    max = arr[0];

    for (int i = 0; i <= len; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return 0;
}

int main() {
    int arr[] = {1, 17, 60, 4, 29};
    int max = arr[0];
    max = find_and_return_max(arr, 5, max);

    printf("max in array is %d\n", max);

    return 0;
}
