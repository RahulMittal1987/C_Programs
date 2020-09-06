/* Q13. If a five-digit number is input through the keyboard, write a program to print a new number by
adding one to each of its digits. For example if the number that is input is 12391 then the output should be displayed as 23402. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int num, a, n;
    long int newnum=0;

    printf("Enter a FIVE(5) Digit number = "); /*Number should be less than 32767*/
    scanf("%d",&num);

    a = num / 10000 + 1;
    n = num % 10000;
    newnum = newnum + a * 10000L;

    a = n / 1000 + 1;
    n = n % 1000;
    newnum = newnum + a * 1000;

    a = n / 100 + 1;
    n = n % 100;
    newnum = newnum + a * 100;

    a = n / 10 + 1;
    n = n % 10;
    newnum = newnum + a * 10;

    a = n + 1;
    newnum = newnum + a;

    printf("\n\n\nOld Number = %d, New Number = %ld",num,newnum);

    return 0;
}
