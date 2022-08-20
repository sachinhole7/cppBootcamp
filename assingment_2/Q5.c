// Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>

int main()
{
    int n, d = 0, sum = 0;

    printf("Enter Three Digit No.: ");
    scanf("%d", &n);


	d = n % 10; // first digit
	n = n / 10;
	sum = sum + d;

	d = n % 10; // second digit
	n = n / 10;
	sum = sum + d;

	d = n % 10; // third digit
	n = n / 10;
	sum = sum + d;
    
	printf("sum of given number is %d\n", sum);
    return 0;
}
