// write a programme to calculate the length of String using printf function.
#include <stdio.h>

int main()
{

    char inputString[21];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", &inputString);

    printf(" = %d\n", printf("%s", inputString));

    return 0;
}