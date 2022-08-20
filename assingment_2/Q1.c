// Write a program to print unit digit of a given number

#include <stdio.h>

int main(){
	int num;

	printf("Enter a Numbrr: ");
	scanf("%d", &num);

	printf("unit digit number of %d is %d\n", num, num%10);
	return 0;
}
