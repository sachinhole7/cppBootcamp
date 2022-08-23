// Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>

int main()
{

    int num, x, y;

    printf("Enter a Number: ");
    scanf("%d", &num);

    x = num / 2;
    y = num - x;

    if (x != y)
    {
        printf("%d is Odd Number.\n", num);
    }
    else
    {
        printf("%d is Even Number.\n", num);
    }

    return 0;
}
