/* Q3. If the marks obtained by a student in five different subjects are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject are 100. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int Maths, Science, English, Hindi, History, AggregrateMarks;
    float PercentageMarks;

    printf("Enter the Marks of Maths Subject = ");
    scanf("%d",&Maths);

    printf("\nEnter the Marks of Science Subject = ");
    scanf("%d",&Science);

    printf("\nEnter the Marks of English Subject = ");
    scanf("%d",&English);

    printf("\nEnter the Marks of Hindi Subject = ");
    scanf("%d",&Hindi);

    printf("\nEnter the Marks of History Subject = ");
    scanf("%d",&History);

    /* Calculate Aggregate Marks */
    AggregrateMarks = Maths + Science + English + Hindi + History;
    printf("\n\n\nThe Aggregate Marks of Five subjects are : %d",AggregrateMarks);

    /* Calculate Percentage Marks */
    PercentageMarks = AggregrateMarks/5;
    printf("\n\n\nThe Percentage Marks of a Student is : %f",PercentageMarks);

    return 0;

}
