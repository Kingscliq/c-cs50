#include <stdio.h>

typedef struct node // if the typedef is removed then u will likely be using struct node throughout the app
{
    int number;
    struct node *next;

} node; // typedef helps u create your own custm type giving it a unique name

int main(void)
{
}