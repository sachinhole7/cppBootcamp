// Write a program to calculate HCF of two numbers 
#include <stdio.h>

int HCF(int num1, int num2){
	int hcf=1;
	for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
	return hcf;
}

int main(){
	int num1, num2;
	printf("Enter a Two No: ");
	scanf("%d %d", &num1, &num2);
	printf("HCF of %d and %d is %d\n", num1, num2, HCF(num1, num2));
	return 0;
}

