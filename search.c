#include <stdio.h>
#include <string.h>

int main(void)
{

    // Search for a number
    // int numbers[] = {3,
    //                  5,
    //                  2,
    //                  8,
    //                  7,
    //                  4,
    //                  0};

    // for (int i = 0; i < sizeof(numbers); i++)
    // {
    //     if (numbers[i] == 20)
    //     {
    //         printf("Found!\n");
    //         return 0;
    //     }
    // }

    // printf("Not Found!\n");
    // return 1;

    string names[] = {"Billy",
                      "Esther",
                      "Moses",
                      "Daniel",
                      "Margret"}; // String type works only with the CS50 library

    for (int i = 0; i < strlen(names); i++)
    {
        if (strcmp(names[i], "Margret") == 0) // Returns 0 if condition is true, we use strcmp to compare two strings in C
        {
            printf("Found!");
            return 0;
        }
    }

    printf("Not Found!");
    return 1;
}