// Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>

int main()
{

    char c;

    printf("Enter a Character: ");
    scanf("%c", &c);

    printf("ASCII code of Character '%c' is %d\n", c, c);

    return 0;
}
