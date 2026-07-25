#include<stdio.h>

void leap(int*);
void main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    leap(&year);
}
void leap(int* year)
{
    if(*year%400==0 || (*year%4==0 && *year%100!=0))
        printf("Given year is Leap Year");
    else
        printf("Given year is Not a Leap Year");
}