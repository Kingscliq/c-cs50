#include <stdio.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;
    // printf("%i\n", n);
    char *name = "string";
    char *s = "HI!";

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%s\n", name);
}
