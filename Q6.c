/* Q6. Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int A, B, C;

    printf("Enter the value of A = ");
    scanf("%d",&A);

    printf("\nEnter the value of B = ");
    scanf("%d",&B);

    /*Condition of Interchange A & B value*/
    C = A;
    A = B;
    B = C;

    printf("\n\nAfter Interchange the Value of A is :  %d",A);
    printf("\n\nAfter Interchange the Value of B is :  %d",B);

    return 0;
}
