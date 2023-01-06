#include <stdio.h>
#include <stdlib.h>

// A PROGRAM TO GET USER INPUT

// clang -o scanf scanf.c (Command to run a prgram to get user input)

int main(void)
{
    int x;

    // For Integers
    // printf("X: ");
    // scanf("%i", &x);
    // printf("x is %i\n", x);

    // For Strings
    char *s = malloc(4); // malloc is used to assign memory locations to strings
    printf("Value: ");
    scanf("%s", s);
    printf("Value is %s\n", s);
}