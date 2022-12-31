#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    // get the value of from user
    // char *s = "Hi!";
    char *s = "hi!";

    char *t = malloc(strlen(s) + 1);
    for (int i = 0; i < strlen(s) + 1; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
