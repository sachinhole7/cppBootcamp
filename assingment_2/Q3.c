// Write a program to swap values of two int variables
#include <stdio.h>

int main()
{
    int x = 7, y = 11, z;

    z = x;
    x = y;
    y = z;

    printf("x = %d\ny = %d\n", x, y);

    return 0;
}