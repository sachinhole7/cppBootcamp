// write a programme to take a three-digit number from the user and rotate its digits by on position towards right.
# include <stdio.h>
int main(){
	int num, rem;
	printf("Enter a Three Digit Number: ");
	scanf("%d", &num);

	rem = num % 10;
	num = num / 10;
	num = (rem * 100) + num;

	printf("Result: %d\n", num);
	return 0;
}
