#include <stdio.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

int main(void)
{
    node *list;

    int *n = malloc(sizeof(node));

    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->left = NULL;
    n->right = NULL;

    // Update the value of list to be n
    list = n;
}
