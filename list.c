#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *list = malloc(3 * sizeof(int)); // Malloc is usualy used for dynamic memory allocation
    if (list == NULL)
    {
        return 1;
    }

    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;

    // Another way of assyning arrays in a more dynamic way
    *list = 1;
    *(list + 1) = 2;
    *(list + 2) = 3;
}