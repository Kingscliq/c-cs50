#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[1] = 33;
    x[2] = 22;
    x[3] = 29;

    free(x);
}