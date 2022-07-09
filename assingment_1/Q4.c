/*
WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
*/
#include <stdio.h>

int main()
{

    float r, PI = 3.14159;

    printf("Enter Radius of Circle (in cm): ");
    scanf("%f", &r);
    printf("Area of circle is %f having the radius %f.\n", PI * r * r, r);

    return 0;
}