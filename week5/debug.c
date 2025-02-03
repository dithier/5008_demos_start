#include <stdio.h>

#define DEBUG(x)                           \
    (printf("Calling function %s\n", #x)); \
    x

#define DEBUG_MODE 1

int main() {
#if DEBUG_MODE
    DEBUG(printf("Hello\n"));
#else
    printf("Hello\n");
#endif

    return 0;
}
