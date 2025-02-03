#include <stdio.h>

#define UNIX 1

int main() {
#if UNIX
    printf("unix \n");
#else
    printf("Not unix\n");
#endif
}
