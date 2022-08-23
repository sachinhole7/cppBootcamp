// write a programme to take marks of 5 subjects from user. Assume marks are given out of 
// 100 add passing marks are 33. Now display wether candidate passed examination or faild.
# include <stdio.h>
int main(){
	int sub1, sub2, sub3, sub4, sub5;

	printf("Enter marks of sub1, sub2, sub3, sub4, sub5 simutaniously: ");
	scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

	printf("Examination Result\n");

	if(sub1 >= 33)
		printf("sub1 %d marks PASSED\n", sub1);
	else
		printf("sub1 %d marks Failed\n", sub1);

	if(sub2 >= 33)
		printf("sub2 %d marks PASSED\n", sub2);
	else
		printf("sub2 %d marks Failed\n", sub2);
	
	if(sub3 >= 33)
		printf("sub3 %d marks PASSED\n", sub3);
	else
		printf("sub3 %d marks Failed\n", sub3);
	
	if(sub4 >= 33)
		printf("sub4 %d marks PASSED\n", sub4);
	else
		printf("sub4 %d marks Failed\n", sub4);
	
	if(sub5 >= 33)
		printf("sub5 %d marks PASSED\n", sub5);
	else
		printf("sub5 %d marks Failed\n", sub5);

	return 0;
}
