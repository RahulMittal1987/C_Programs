/* Q10. In a town, the percentage of men is 52. The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population,
write a program to find the total number of illiterate men and women if the population of the town is 80,000. */

#include<stdio.h>
#include<conio.h>

int main()
{
    long int totpop = 80000;
    long int totmen, totlit, litmen, ilitmen, totwomen, totlitwomen;
    long int ilitwomen;

    totmen = (52/100) * totpop;
    printf("\nTotal number of Mens in the Town is : %ld",totmen);

    totlit = (48/100) * totpop;
    printf("\nTotal number of Literate People in the Town is : %ld",totlit);

    litmen = (35/100) * totpop;
    printf("\nTotal number of Literate Mens in the Town is : %ld",litmen);

    totlitwomen = totlit - litmen;

    totwomen = totpop - totmen;
    printf("\nTotal number of Womens in the Town is : %ld",totwomen);

    ilitmen = totmen - litmen;
    printf("\nTotal number of Illiterate Mens in the Town is : %ld",ilitmen);

    ilitwomen = totwomen - totlitwomen;
    printf("\nTotal number of Illiterate Womens in the Town is : %ld",ilitwomen);

    return 0;
}
