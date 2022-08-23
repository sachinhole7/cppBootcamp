// Write a program to print cubes of the first N natural numbers 
#include <stdio.h>

int main(){
	int i, n;

	printf("Enter a Number: ");
        scanf("%d", &n);

	for(i=1; i<=n; i++){
		printf("%d\n", i*i*i);
	}

	return 0;
}

