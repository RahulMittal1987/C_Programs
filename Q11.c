/* Q11. A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard
in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int amount, nohun, nofifty, noten;

    printf("Enter the Amount to be Withdrawn : ");
    scanf("%d",&amount);

    nohun = amount / 100;
    printf("\nNumber of Hundred Notes = %d",nohun);

    amount = amount % 100;
    nofifty = amount / 50;
    printf("\nNumber of Fifty Notes = %d",nofifty);

    amount = amount % 50;
    noten = amount / 10;
    printf("\nNumber of Ten Notes = %d",noten);

    return 0;
}
