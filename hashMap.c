#include <stdio.h>
#include <stdlib.h>

int main(void){

    typedef struct node{
        char word[LONGEST_WORD +1]; //array of char
        struct node *next;
    }
    node;

    node *hash_table[NUMBER_OF_BUCKETS]; //, array of node, 26 in the eg.
}