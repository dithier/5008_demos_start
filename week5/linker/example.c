#include <stdio.h>

int sum(int a, int b);
int diff(int a, int b);

int main() {
    int result = sum(2, 3);
    int diff_result = diff(3, 2);

    printf("%d, %d\n", result, diff_result);

    return 0;
}
