/* Q5. The length & breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle. */

#include<stdio.h>
#include<conio.h>

int main()
{
    float L, B, R, AR, PR, AC, CC;

    printf("Enter the Length of a rectangle(L) = ");
    scanf("%f",&L);

    printf("\nEnter the Breadth of a rectangle(B) = ");
    scanf("%f",&B);

    /*Calculate the Area of Rectangle*/
    AR = L * B;
    printf("\n\nThe Area of a Rectangle are = %f",AR);

    /*Calculate the Perimeter of Rectangle*/
    PR = 2 *(L + B);
    printf("\n\nThe Perimeter of a Rectangle are = %f",PR);

    printf("\n\n\nEnter the Radious of a Circle(R) = ");
    scanf("%f",&R);

    /*Calculate the Area of Circle*/
    AC = 3.14 * R * R;
    printf("\n\nThe Area of a Circle are = %f",AC);

    /*Calculate the Circumference of Circle*/
    CC = 2 * 3.14 * R;
    printf("\n\nThe Circumference of a Circle are = %f",CC);

    return 0;
}
