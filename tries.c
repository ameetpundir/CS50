// tree that gives us constant time lookup even with massive data set : BIG O of 1 : O(1) - time taken is constant in search -- uses huge amount of memory, a lot of empty sets

typedef struct node
{
    bool is_word;                            // to display the name stops here
    struct node *children[SIZE_OF_ALPHABET]; //[26]
} node;