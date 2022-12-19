#include <stdio.h>

int add_two_int(int a, int b)
{
    return a + b;
}

bool valid_triangle(int a, int b, int c)
{
    // triangle must have sides with positive lengths
    if (a < 0 || b < 0 || c < 0)
    {
        return false;
    }
// give or take
    // the sum of the length of any two triangle must be greater than the length of the third one
    if ((a + b) <= c || (c + b) <= a) || (a + c) <= b)
        {
            return false;
        }
    else
        return true
}

int main(void)
{
    printf("Hello, World\n");

    int sum = add_two_int(4, 6);
    printf("Sum is: %i", sum);
}