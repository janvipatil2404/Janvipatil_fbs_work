#include<stdio.h>

void grade();

void main()
{
    grade();
}

void grade()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks>=75)
        printf("Student is passed with Distinction");
    else if(marks>=65)
        printf("Student is passed with First Class");
    else if(marks>=55)
        printf("Student is passed with Second Class");
    else if(marks>=40)
        printf("Student is passed with Pass Class");
    else
        printf("Student is Fail");
}