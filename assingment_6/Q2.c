// Write a program to calculate sum of first N even natural numbers  
#include <stdio.h>

int sum(int num){
	int i, sum=0;

	for(i=1; i<=(num*2); i++){
		if(i%2 == 0){
			sum = sum + i;
		}
	}
	return sum;
}

int main(){
	int n;

	printf("Enter a natural number: ");
	scanf("%d", &n);

	printf("sum of firts %d natural numbers: %d\n", n, sum(n));

	return 0;
}

