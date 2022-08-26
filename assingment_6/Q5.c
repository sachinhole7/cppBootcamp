// Write a program to calculate sum of cubes of first N natural numbers  
#include <stdio.h>

int sum(int num){
	int i, sum=0;

	for(i=1; i<=num; i++){
		sum = sum + (i * i * i);
	}
	return sum;
}

int main(){
	int n;

	printf("Enter a natural number: ");
	scanf("%d", &n);

	printf("sum of cubes of firts %d natural numbers: %d\n", n, sum(n));

	return 0;
}

