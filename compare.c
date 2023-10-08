#include <stdio.h>
#include <string.h>
// #include <cs50.h>

int main(void)
{
    // int a = 6;
    // int b = 6;
    // if (a == b)
    // {
    //     printf("Same\n");
    // }
    // else
    // {

    //     printf("Not Same\n");
    // }

    char *s = "HI!"; // H I ! \0
    char *f = "Hello!!";
    char *t = "HI!";

    // t[0] = "h";
    // t[0] = 'a';
    if (s == t) // why is this working??!!!
    // if (strcmp(s, t) == 0)
    {

        printf("Same\n");
    }
    else
    {

        printf("Not Same\n");
    }

    printf("%p\n", s);

    printf("%p\n", t);

    printf("%s\n", s);

    printf("%c\n", t[0]);

    printf("%s\n", t);
}