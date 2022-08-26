// Write a program to check whether a given number is a Prime number or not 
#include <stdio.h>

void isPrimeNumber(int num){
	int i, count=0;
	for(i=1; i<=num; i++){
		if(num%i == 0){
			count++;	
		}
	}

	if(count == 2){
		printf("%d is Prime Number\n", num);
	}
	else{
		printf("%d is not Prime Number\n", num);
	}
	

}

int main(){
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	isPrimeNumber(n);

	return 0;
}

