// Write a program to find next Prime number of a given number 
#include <stdio.h>

int nextPrimeNumber(int num){
	int j, count=0;
	while(1){
		num++;
		for(j=1; j<=num; j++){
			if(num%j == 0){
				count++;
			}
		}
		if(count == 2){
			 return num;
		}
		count=0;
	}
	return 0;
}

int main(){
	int n;
	printf("Enter two Numbers: ");
	scanf("%d", &n);
	
	printf("%d\n", nextPrimeNumber(n));
	return 0;
}

