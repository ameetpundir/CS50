#include <stdio.h>

void swap(int a, int b);
int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);
    swap(x, y); // nothing will happen
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b) // nothing will happen
{
    int x = a;
    a = b;
    b = x;
}

// lots of local variables -> lots of stack
// lots of mallac-mallac and do not call free -> lots of heap