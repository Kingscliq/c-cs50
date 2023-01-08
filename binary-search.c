#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

bool binary_search(node *tree, int number);
int main(void)
{
}

bool binary_search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        binary_search(tree->left, number);
    }
    else if (number > tree->number)
    {
        binary_search(tree->right, number);
    }
    else
    {
        return true;
    }
}