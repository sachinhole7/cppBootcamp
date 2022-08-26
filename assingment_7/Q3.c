// Write a program to check whether a given number is there in the Fibonacci series or not. 
#include <stdio.h>
#include <stdlib.h>

void checkFibonacci(int num){
	int i, count=0, fnum=0, snum=1, nth; 
	for(i=1; fnum<=num; i++){
		if(fnum == num){
			printf("%d is in Fibonacci series\n", num);
			exit(0);
		}
		nth = fnum + snum;
		fnum = snum;
		snum = nth;
	}
	printf("%d is not in Fibonacci series\n", num);
}

int main(){
	int n;
	printf("Enter a no.: ");
	scanf("%d", &n);
	checkFibonacci(n);
	return 0;
}

