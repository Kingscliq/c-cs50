#include <stdio.h>

// A PROGRAM TO GET USER INPUT

// clang -o scanf scanf.c (Command to run a prgram to get user input)
int main(void)
{
    int x;

    printf("X: ");
    scanf("%i", &x);
    printf("x is %i\n", x);
}