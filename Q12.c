/* Q12. If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item. */

#include<stdio.h>
#include<conio.h>

int main()
{
    float sp, cp, profit;

    printf("Enter the total Selling Price = ");
    scanf("%f",&sp);

    printf("\nEnter the total Profit = ");
    scanf("%f",&profit);

    cp = sp - profit;
    cp = cp / 15; /*Cost price per item*/

    printf("\n\n\nCost Price Per Item are = %f",cp);

    return 0;
}
