// Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>

int main()
{
    int x = 7, y = 3;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x = %d\ny = %d\n", x, y);
    return 0;
}