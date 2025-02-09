#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int linear_search(int arr[], int length, int desired) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == desired) {
            return 1;
        }
    }

    return 0;
}

int binary_search(int arr[], int length, int desired) {
    int low_idx = 0;
    int high_idx = length - 1;
    int mid_idx = (low_idx + high_idx) / 2;

    while (low_idx <= high_idx) {
        if (arr[mid_idx] == desired) {
            return 1;
        } else if (arr[mid_idx] > desired) {
            high_idx = mid_idx - 1;
        } else {
            low_idx = mid_idx + 1;
        }

        mid_idx = (low_idx + high_idx) / 2;
    }

    return 0;
}

int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int main() {
    int len = 1000000;
    int arr[1000000];

    for (int i = 0; i < len; i++) {
        arr[i] = i;
    }

    qsort(arr, len, sizeof(int), compare);

    // start timer
    struct timeval start, stop;
    gettimeofday(&start, NULL);

    int result = linear_search(arr, len, -2);
    gettimeofday(&stop, NULL);

    printf(
        "linear search took %lu us\n",
        (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    result = binary_search(arr, len, -2);
    gettimeofday(&stop, NULL);

    printf(
        "binary search took %lu us\n",
        (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);

    return 0;
}
