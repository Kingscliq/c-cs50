#include <stdio.h>
#include <string.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;
    // printf("%i\n", n);
    char *name = "string";
    char *s = "HI!";
    char *t = "HI!";

    int numbers[] = {2, 5, 7, 2, 9, 0};

    // For Pointer arithmetic for strings of Characters
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%s\n", name);

    // For Pointer Arithmetic for Arrays
    printf("%i\n", *numbers);
    printf("%i\n", *numbers + 1);
    printf("%i\n", *numbers + 2);

    // Comparing two strings
    if (strcmp(t, s) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different!\n");
    }
}
