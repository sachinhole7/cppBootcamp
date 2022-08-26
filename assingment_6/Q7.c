// Write a program to count digits in a given number 
#include <stdio.h>

int digitsInNumber(int num){
	int i=0;
	while(num){
		num = num/10;
		i++;
	}	
	return i;
}

int main(){
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf(" %d is %d Digit Number\n", n, digitsInNumber(n));

	return 0;
}

