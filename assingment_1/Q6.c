// write a programme to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”
#include <stdio.h>

int main()
{

    char firstName[11], lastName[11];

    printf("Enter your userName: ");
    scanf("%s %s", &firstName, &lastName);

    printf("\"Hello , %s %s\"\n", firstName, lastName);

    return 0;
}