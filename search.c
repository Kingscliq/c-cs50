#include <stdio.h>

int main(void)
{
    int numbers[] = {3,
                     5,
                     2,
                     8,
                     7,
                     4,
                     0};
    for (int i = 0; i < sizeof(numbers); i++)
    {
        if (numbers[i] == 20)
        {
            printf("Found!\n");
            return 0;
        }
    }

    printf("Not Found!\n");
    return 1;
}