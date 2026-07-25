#include<stdio.h>

void category();

void main()
{
    category();
}

void category()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age>=60)
        printf("Person is Senior");
    else if(age>=20)
        printf("Person is Adult");
    else if(age>=12)
        printf("Person is Teenager");
    else
        printf("Person is Child");
}