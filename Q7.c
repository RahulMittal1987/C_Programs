/* Q7. If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int num, a, n;
    int sum = 0; /*sum initialised to ZERO as otherwise it will contain a garbage value*/

    printf("Enter a FIVE(5) digit number (Less Than 32767) :  ");
    scanf("%d",&num);

    a = num % 10; /*last digit extracted as reminder*/
    n = num/10; /*remaining digits*/
    sum = sum + a; /*sum updated with adding of extracted digit*/

    a = n % 10; /*4th digit*/
    n = n / 10;
    sum = sum + a;

    a = n % 10; /*3rd digit*/
    n = n / 10;
    sum = sum + a;

    a = n % 10; /*2nd digit*/
    n = n / 10;
    sum = sum + a;

    a = n % 10; /*1st digit*/
    sum = sum + a;

    printf("\n\n\nThe Sum of FIVE(5) Digit Number %d is = %d",num,sum);

    return 0;
}
