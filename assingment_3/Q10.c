// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>

int main()
{
    int costPrice, sellingPrice, profit, loss;

    printf("Enter a Cost Price: ");
    scanf("%d", &costPrice);

    printf("Enter a Selling Price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice < costPrice)
    {
        loss = costPrice - sellingPrice;
        printf("You have %d%% Loss.\n", loss);
    }
    else
    {
        profit = sellingPrice - costPrice;
    }

    return 0;
}
