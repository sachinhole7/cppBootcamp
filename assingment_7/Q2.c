// Write a program to print first N terms of Fibonacci series 
#include <stdio.h>

void fibonacci(int num){
	int i, count=0, fnum=0, snum=1, nth; 
	for(i=1; i<=num; i++){
		printf("%d\n", fnum);
		nth = fnum + snum;
		fnum = snum;
		snum = nth;
		count++;
	}
}

int main(){
	int n;
	printf("Enter a no.: ");
	scanf("%d", &n);
	fibonacci(n);
	return 0;
}

