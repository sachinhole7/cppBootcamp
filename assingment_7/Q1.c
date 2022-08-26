// Write a program to find the Nth term of the Fibonnaci series. 
#include <stdio.h>

int fibonacci(int num){
	int i, count=0, fnum=0, snum=1, nth; 
	for(i=1; i<num; i++){
		nth = fnum + snum;
		fnum = snum;
		snum = nth;
		count++;
	}
	return fnum;
}

int main(){
	int n;
	printf("Enter a no.: ");
	scanf("%d", &n);
	printf("value %dth term of fibonacci series is %d\n", n, fibonacci(n));
	return 0;
}

