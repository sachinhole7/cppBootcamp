// Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 999 && num > 99)
    {
        printf("%d is Three Digit Number.\n");
    }
    else
    {
        printf("%d is Not a Three Digit Number.\n");
    }

    return 0;
}