#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b);
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i and y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i and y is %i\n", x, y); // returns the same value as line 10 beacuse we didnt its making reference to the same value over and over again
}

// Intead of the values we use pointers
int swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;

    *b = tmp;
}