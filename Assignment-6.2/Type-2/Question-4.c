#include<stdio.h>

int grade();

void main()
{
    int res;

    res=grade();

    if(res==0)
        printf("Student is passed with Distinction");
    else if(res==1)
        printf("Student is passed with First Class");
    else if(res==2)
        printf("Student is passed with Second Class");
    else if(res==3)
        printf("Student is passed with Pass Class");
    else
        printf("Student is Fail");
}

int grade()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks>=75)
        return 0;
    else if(marks>=65)
        return 1;
    else if(marks>=55)
        return 2;
    else if(marks>=40)
        return 3;
    else
        return 4;
}