// Write a program to check whether a given number is an Armstrong number or not 
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
			printf("%d is Armstrong Number\n", n);
		}
		else{
			printf("%d is not Armstrong Number\n", n);
		}
}

int main(){
	int n; 
	printf("Enter a No: ");
	scanf("%d", &n);

	isArmstrongNumber(n);

	return 0;
}

