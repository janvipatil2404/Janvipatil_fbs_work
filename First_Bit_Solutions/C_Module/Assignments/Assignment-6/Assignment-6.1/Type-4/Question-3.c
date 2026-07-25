#include<stdio.h>

int leap(int);

void main()
{
    int year, res;

    printf("Enter year: ");
    scanf("%d", &year);

    res = leap(year);

    if(res==0)
        printf("Given year is Leap year");
    else
        printf("Given year is Not a Leap year");
}

int leap(int year)
{
    if(year%400==0 || (year%4==0 && year%100!=0))
        return 0;
    else
        return 1;
}