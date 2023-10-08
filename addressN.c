#include <stdio.h>

int main(void)
{

    int a[] = {2, 3, 4, 5};

    printf("%i\n", *a);

    printf("%i\n", *(a + 1));

    printf("%i\n", *(a + 2));

    printf("%i\n", *(a + 3));
}