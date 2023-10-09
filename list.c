#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // int list[3]; //memory on stack
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%i\n", list[i]);
    // }

    int *list = malloc(3 * sizeof(int)); // memory on heap
    if (list == NULL)
    {
        return 1; // no memory left,allocated memory NULL, so leave
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // below is same as above, but used less
    // *list = 1;
    // *(list + 1) = 2;
    // *(list + 2) = 3;

    // at a later stage if I need a int[4]
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;
    free(list);
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;
}