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
    if (n == NULL)
    {
        return 1;
    }

    n->number = 1;
    n->next = NULL;

    // Update List with to point to new node
    list = n;

    // Add a number to our linked List
    n = malloc(sizeof(node);

    if(n == NULL){
        free(list);
        return 1
    }

    n->number = 2;
    n->next = NULL;
    list->next = 2;

// Add another number to the list
    n= malloc(sizeof(node))
    if(n == NULL){
        free(list);
        free(list->next);
        return 1;
    }
}