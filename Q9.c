/* Q9. If a four-digit number is input through the keyboard,
write a program to obtain the sum of the first and last digit of this number. */

#include<stdio.h>
#include<conio.h>
 int main()
 {
     int n, a, sum=0;

     printf("Enter a Four Digit Number = ");
     scanf("%d",&n);

     a = n / 1000; /*1st digit*/
     sum = sum + a; /*Sum updated with addition of 1st digit*/

     a = n % 10; /*Last digit*/
     sum = sum + a; /*Sum updated with addition of last digit*/

     printf("\n\nSum of First and Last digit of %d = %d",n,sum);

     return 0;
 }
