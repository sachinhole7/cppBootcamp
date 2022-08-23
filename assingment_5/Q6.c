// Write a program to print the first N even natural numbers
#include <stdio.h>

int main(){
        int i, n;

	printf("Enter a Number: ");
        scanf("%d", &n);

        for(i=1; i<=n*2; i++){
                if((i%2) == 0)
                        printf("%d\n", i);
        }

        return 0;
}
