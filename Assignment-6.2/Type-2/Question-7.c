#include<stdio.h>

int category();

void main()
{
    int res;

    res=category();

    if(res==0)
        printf("Person is Senior");
    else if(res==1)
        printf("Person is Adult");
    else if(res==2)
        printf("Person is Teenager");
    else
        printf("Person is Child");
}

int category()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age>=60)
        return 0;
    else if(age>=20)
        return 1;
    else if(age>=12)
        return 2;
    else
        return 3;
}