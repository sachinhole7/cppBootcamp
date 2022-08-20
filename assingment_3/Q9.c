// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is Greater than given Three Numbers.\n", num1);
        }
        else
        {
            printf("%d is Greater than given Three Numbers.\n", num3);
        }
    }
    else
    {
        if (num2 < num3)
        {
            printf("%d is Greater than given Three Numbers.\n", num3);
        }
        else
        {
            printf("%d is Greater than given Three Numbers.\n", num2);
        }
    }

    return 0;
}
