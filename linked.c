#include <stdio.h>
#include <stdlib.h>

typedef struct node // if the typedef is removed then u will likely be using struct node throughout the app
{
    int number;
    struct node *next;

} node; // typedef helps u create your own custm type giving it a unique name

int main(void)
{
    // List of Size
    node *list;

    // Add a number to List
    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        return 1;
    }

    n->number = 1;
    n->next = NULL;

    // Update List with Value of n
    list = n;
}