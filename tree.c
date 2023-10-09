
// pending complete it later

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    typdef struct node
    {
        int number;
        struct node *left;
        struct node *right;
    } node;

    void free_tree(node * root);

    void print_tree(node * root);
}