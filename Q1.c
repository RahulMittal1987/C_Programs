/* Q1. Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate his gross salary. */

#include<stdio.h>
#include<conio.h>

int main()
{
    float BasicSalary, DA, HRA, GrossSalary;

    printf("Enter the Basic Salary of Ramesh = ");
    scanf("%f",&BasicSalary);

    /* Calculate Dearness Allowance */
    DA = ((BasicSalary * 40)/100);
    printf("\n\nDearness Allowance = %f",DA);

    /* Calculate House Rent Allowance */
    HRA = ((BasicSalary * 20)/100);
    printf("\n\House Rent Allowance = %f",HRA);

    /* Calculate Gross Salary */
    GrossSalary = BasicSalary + DA + HRA;
    printf("\n\n\nRamesh Gross Salary = %f",GrossSalary);

    return 0;
}
