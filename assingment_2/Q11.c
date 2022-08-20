// Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number.
// (Example - number=234 and digit=9 then the resulting number is 2349)
#include <stdio.h>

int main()
{

    int num, digit;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter a single Digit: ");
    scanf("%d", &digit);
	
    num = num * 10;
    num = num + digit;

    printf("rsulting number is %d\n", num);

    return 0;
}
