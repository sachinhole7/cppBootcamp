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
            printf("%d is Greater than %d and %d\n", num1, num2, num3);
        }
        else
        {
            printf("%d is Greater than %d and %d\n", num3, num1, num2);
        }
    }
    else
    {
        if (num2 < num3)
        {
            printf("%d is Greater than %d and %d\n", num3, num1, num2);
        }
        else
        {
            printf("%d is Greater than %d and %d\n", num2, num1, num3);
        }
    }

    

    return 0;
}
