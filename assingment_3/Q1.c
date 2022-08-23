// Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Positive Number.\n");
    }
    else
    {
        printf("%d is nonPositive Number.\n");
    }

    return 0;
}