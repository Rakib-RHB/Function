/* Write down a function that will take a
year as a parameter and will return
number of days in that year. In your
main function take user input for year
and use this function, to print two
things: (1) number of days in the year,
and (2) whether the year is a leap year
or not*/



#include<stdio.h>
int numberofDays(int year)
{
    int days;
    if (year%400 == 0)
        days = 366;
    else if (year%100 == 0)
        days = 365;
    else if (year%4 == 0)
        days = 366;
    else days = 365;
    return days;
}
void main(void)
{
    int y,p;
    scanf("%d",&y);
    p = numberofDays(y);
    printf("Number of days %d\n",p);
    if(p == 366) printf("LEAP YEAR");
    else printf("Not a Leap Year ");
}
