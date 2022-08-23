// Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (0 == num % 5)
    {
        printf("%d is Divisible by 5.\n", num);
    }
    else
    {
        printf("%d is not Divisible by 5.\n");
    }

    return 0;
}