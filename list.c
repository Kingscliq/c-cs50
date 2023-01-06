#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *list = malloc(3 * sizeof(int)); // Malloc is usualy used for dynamic memory allocation
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int));

    if (tmp == NULL)
    {
        return 1;
    }

    for (int i = 0; i < sizeof(tmp); i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;
    free(list);

    list = tmp;

    for (int i = 0; i < sizeof(tmp); i++)
    {
        printf("list is %i\n", tmp[i]);
    }

    free(list);
    return 0;
    // Another way of assyning arrays in a more dynamic way
    // *list = 1;
    // *(list + 1) = 2;
    // *(list + 2) = 3;
}