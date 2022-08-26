// Write a program to print all Prime numbers between two given numbers 
#include <stdio.h>

void primeNumbers(int num, int y){
	int i, j, count=0 ;
        for(i=num; i<=y; i++){
                for(j=1; j<=num; j++){
                        if(num%j == 0){
                                count++;
                        }
                }
                if(count == 2){
                        printf("%d\n", num);
                }
                num++;
                count=0;
        }
}

int main(){
	int n1, n2;
	printf("Enter two Numbers: ");
	scanf("%d %d", &n1, &n2);
	primeNumbers(n1, n2);
	return 0;
}

