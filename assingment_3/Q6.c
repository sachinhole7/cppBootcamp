// Write a program to print greater between two numbers. Print one number of both are the same.
#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Enter a Two Number: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("%d\n", num1);
    }
    else
    {
        if (num1 > num2)
        {
            printf("%d is Greater than %d.\n", num1, num2);
        }
        else
        {
            printf("%d is Greater than %d.\n", num2, num1);
        }
    }

    return 0;
}