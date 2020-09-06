/* Q2. The distance between two cities (in km.) is input through the keyboard. Write a program to convert and
print this distance in meters, feet, inches and centimeters. */

#include<stdio.h>
#include<conio.h>

int main()
{
    float KM, Mt, Ft, Inch, CM;

    printf("Enter the distance of Two cities in KM = ");
    scanf("%f",&KM);

    Mt = KM * 1000;
    printf("\n\nThe distance of Two cities in Meter = %f",Mt);

    CM = Mt * 100;
    printf("\n\nThe distance of Two cities in Centi Meter = %f",CM);

    Inch = CM / 2.54;
    printf("\n\nThe distance of Two cities in Inches = %f",Inch);

    Ft = Inch /12;
    printf("\n\nThe distance of Two cities in Feets = %f",Ft);

    return 0;

}
