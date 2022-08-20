// Write a program to check whether the given number is even or odd using a bitwise operator
#include <stdio.h>
int main(){
	int result = 0, n;

	printf("Enter a Number: ");
	scanf("%d", &n);

	result = n & 1;

	if(result == 1){
		printf("given number %d is Odd number.\n", n);
	}
	else{
		printf("given number %d is Even number.\n", n);	
	}
	return 0;
}
