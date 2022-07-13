// Write a program to check whether a given number is an even number or an odd number.
#include <stdio.h>

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d in a Even Number.\n");
    }
    else
    {

        printf("%d is an Odd Number.\n");
    }

    return 0;
}