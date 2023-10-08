#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;

    // *y = 13; // this will fail if low memory
    y = x;

    *y = 13;

    printf("%i\n", *x);

    printf("%i\n", *y);

    printf("%p\n", x);

    printf("%p\n", y);

    free(x);

    printf("%p\n", x);

    // free(y);

    printf("%p\n", y);
}