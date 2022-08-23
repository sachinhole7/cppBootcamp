// Write a program to print a table of N. 
#include <stdio.h>

int main(){
	int i, n;

	printf("Enter a Number: ");
        scanf("%d", &n);

	for(i=1; i<=10; i++){
		printf("%d\n", i*n); 
	}

	return 0;
}

