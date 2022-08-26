// Write a program to print all Armstrong numbers under 1000 
#include <stdio.h>

void isArmstrongNumber(int n){
	int i, num=n, rem=0, digits=0, arm=0, result=1;
	// get no. of digits
	while(num){
		rem = num%10;
		num = num/10;
		digits++;
	}
	// is armstrong
	num=n;
	while(num){
		rem = num%10;
		num = num/10;
		for(i=1; i<=digits; i++){
			result *= rem;
		}
		arm = arm + result;
		result=1;
	}
		if(n == arm){
			printf("%d\n", n);
		}
}

int main(){
	int n;
	for(n=1; n<=1000; n++){
		isArmstrongNumber(n);
	}

	return 0;
}

