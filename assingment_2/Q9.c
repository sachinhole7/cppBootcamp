// Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>

int main()
{

    int i;
    float f;
    char c;
    double d;

    i = sizeof(i);
    f = sizeof(f);
    c = sizeof(c);
    d = sizeof(d);

    printf("size of int:     %d\n", i);
    printf("size of float:   %f\n", f);
    printf("size of char:    %d\n", c);
    printf("size of double:  %lf\n", d);

    return 0;
}