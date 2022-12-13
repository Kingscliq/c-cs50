#include <stdio.h>

void set_array(int arr[4]);
void set_int(int x);

int main(void)
{
    // direct instanciation
    int students_grages[8] = {3,
                              5,
                              7,
                              8,
                              9,
                              30,
                              45,
                              68};

    // indirect instanciation
    int list[4];

    list[0] = 45;
    list[1] = 23;
    list[2] = 12;
    list[3] = 21;

    int b[4] = {
        0,
        1,
        2,
        3,
    };
    int a = 23;
    set_array(b);
    set_int(a);
    printf("%d, %d", a, b[0]);
}

// Declare a function to set Array
void set_array(int arr[4])
{
    arr[0] = 22;
}

// Declare a function to set int
void set_int(int x)
{
    x = 22;
}