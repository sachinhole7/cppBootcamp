// Write a program to reverse a given number 
#include <stdio.h>

int reverseNumber(int num){
	int rem, rev=0;
	while (num != 0) {
   		rem = num % 10;
    		rev = rev * 10 + rem;
    		num /= 10;
  	}
	return rev;
}

int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	printf(" %d\n", reverseNumber(n));

	return 0;
}

