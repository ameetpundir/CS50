#include <stdio.h>

int main(void)

{
    int n = 51;
    printf("%i\n", n);
    int *p = &n;        // pointer
    printf("%p\n", &n); // address
    printf("%i\n", *p); // value at the address
}