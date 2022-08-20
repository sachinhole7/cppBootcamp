// Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main(){
	int x = 9, count = 0, result =0;

	while(x != 0){
		
		result = x & 1;
		count++;

		if(result == 1){
			printf("%d is position of first 1 in LSB.\n", count);
			break;
		}
		
		x = x >> 1;

	}
	return 0;
}

