#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (void) {
    void *p;
    for (int i = 0; i < 50000; ++i) {
        p = malloc(0x80000000);
        printf("p = %p\n", p);
        if (p == 0) {
            printf("malloc renvoie 0.\n");
            exit(1);
        }
    }
    return 0;
}

