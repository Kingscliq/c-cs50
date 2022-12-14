#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

void print_tree(node *root);
void free_tree(node *root);

int main(void)
{
    node *list;

    node *n = malloc(sizeof(node));

    list = n;

    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->left = NULL;
    n->right = NULL;

    // Update the value of list to be n
    list = n;

    // get another memory to add an element to the tree
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }

    n->number = 3;
    n->left = NULL;
    n->right = NULL;

    // Update the value of list to be n
    list->left = n;

    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(list);
        return 1;
    }

    n->number = 4;
    n->left = NULL;
    n->right = NULL;

    list->right = n;

    print_tree(list);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    free_tree(root->left);
    free_tree(root->right);
    free(root);
}