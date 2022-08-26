// Write a program to print all Prime numbers under 100 
#include <stdio.h>

void oneTo100PrimeNumbers(){
	int i, j, count=0, num=1;
        for(i=1; i<=100; i++){
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
	oneTo100PrimeNumbers();
	return 0;
}

