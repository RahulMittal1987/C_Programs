/* Q8. If a five-digit number is input through the keyboard, write a program to reverse the number */
#include<stdio.h>
#include<conio.h>

int main()
{
    int n, a, b;
    long int revnum=0; /*initialised to ZERO as otherwise it will contain a garbage value*/

    printf("Enter the FIVE(5) digit number = ");
    scanf("%d",&n);

    a = n % 10; /*Last digit*/
    n = n / 10; /*remaining digit*/
    revnum = revnum + a * 10000L; /*reverse number updated with value of extracted digit*/

    a = n % 10; /*4th digit*/
    n = n / 10;
    revnum = revnum + a * 1000;

    a = n % 10; /*3rd digit*/
    n = n / 10;
    revnum = revnum + a * 100;

    a = n % 10; /*2nd digit*/
    n = n / 10;
    revnum = revnum + a * 10;

    a = n % 10; /*1st digit*/
    revnum = revnum + a;

    printf("\n\n\nThe Reverse number = %ld",revnum); /*ld is used for long integer*/

    return 0;

}
