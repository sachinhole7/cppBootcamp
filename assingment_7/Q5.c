// Write a program to check whether two given numbers are co-prime numbers or not 
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
	int n1, n2;
	printf("Enter Two NO: ");
	scanf("%d %d", &n1, &n2);

	if(1 == HCF(n1, n2)){
		printf("%d and %d are CO-Prime Numbers\n", n1, n2);
	}
	else{
		printf("%d and %d are Not CO-Prime Numbers\n", n1, n2);
	}

	return 0;
}

