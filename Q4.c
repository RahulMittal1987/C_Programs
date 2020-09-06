/* Q4. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert
this temperature into Centigrade degrees. */

#include<stdio.h>
#include<conio.h>

int main()
{
    float F, C;

    printf("Enter the Temperature in Fahrenheit degrees = ");
    scanf("%f",&F);

    /* Calculate the Temperature in Centigrade degrees */
    C = (5 * (F-32))/9 ;

    printf("\n\n\nThe Temperature in Centigrade degrees are %f",C);

    return 0;
}
