#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct node
    {
        int number;
        struct node *next; // Because the computer need to know that it is pointing at the next node, and not just the starting point of the next node(just the int *)
    } node;

    // list of size 0
    node *list = NULL; // our main linked list we want to assign to a already created linkded list

    // Add a number to list
    node *n = malloc(sizeof(node)); // temporary linked list, that will later be assigned to list

    if (n != NULL) // if memory is available otherwise nothing works and we exit
    {
        //(*n).number = 1;
        n->number = 1; // syntactical sugar for above statement
        n->next = NULL;
    }
    else
    {
        free(list);
        return 1;
    }

    list = n;

    n->number = 2;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        // free(list); //this is wrong, we should not touch the memory after it is freed
        free(list->next);
        free(list); // freeing this first is not correct
        return 1;
    }

    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // printing numbers

    // for (int i=0; i < 3; i++) -- this wont work

    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    // free list

    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
}