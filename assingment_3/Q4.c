// Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num & 1 == 1)
    {
        printf("%d is Odd Number.\n", num);
    }
    else
    {
        printf("%d is Even Number.\n", num);
    }

    return 0;
}