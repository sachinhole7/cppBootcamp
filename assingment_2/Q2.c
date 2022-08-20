// Write a program to print a given number without its last digit.
#include <stdio.h>

int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	printf("number without its last digit number is %d\n", n/10);

	return 0;
}
