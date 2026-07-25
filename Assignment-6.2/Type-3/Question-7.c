#include<stdio.h>

void category(int);

void main()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    category(age);
}

void category(int age)
{
    if(age>=60)
        printf("Person is Senior");
    else if(age>=20)
        printf("Person is Adult");
    else if(age>=12)
        printf("Person is Teenager");
    else
        printf("Person is Child");
}