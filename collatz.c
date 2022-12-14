#include <stdio.h>

int collatz(int n);

int main(void)
{
    int result = collatz(18);

    printf("%i", result);
}

int collatz(int n)
{

    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return collatz((3 * n) + 1);
    }
}
