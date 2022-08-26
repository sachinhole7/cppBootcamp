// Write a program to calculate sum of first N natural numbers 
#include <stdio.h>

int sum(int num){
	int i, sum=0;

	for(i=1; i<=num; i++){
		sum = sum + i;
	}

	return sum;
}

int main(){
	int n;

	printf("Enter a Natural Number: ");
	scanf("%d", &n);
	printf("Sum of First %d Natural No.: %d \n", n, sum(n));
	return 0;
}

