// write a program which take month number as an input and display number of days in that month.
#include <stdio.h>

int main(){
	char month[10]; 

	printf("Enter a Month name: ");
	scanf("%s", month);

	if(month == ("january" || "march" || "may" || "july" || "august" || "october" || "december"))
	{
		printf(" %s: 31 Days\n", month);
	}

	if(month == "febuary")
	{
		printf(" %s: 28/29 Days\n", month);
	}

	if(month == ("april" || "june" || "september" || "november"))
	{
		printf(" %s: 30 Days\n", month);
	}

	return 0;
}
