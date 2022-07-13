// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include <stdio.h>

int main()
{
    int inr;
    float usd = 76.23;

    printf("Enter Rupee: ");
    scanf("%d", &inr);

    usd = inr / usd;

    printf("%f USD\n", usd);
    return 0;
}