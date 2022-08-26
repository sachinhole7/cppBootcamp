// Write a program to calculate factorial of a number 
#include <stdio.h>

int factorial(int num){
	int i, factorial = num;
	for(i=1; i<num; i++){
		factorial = factorial * i;
	}
	return factorial;
}

int main(){
	int n;

	printf("Enter a Number: ");
	scanf("%d", &n);

	printf("factorial of %d is %d\n", n, factorial(n));

	return 0;
}

