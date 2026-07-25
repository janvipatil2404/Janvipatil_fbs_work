#include<stdio.h>

void vote(int);

void main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    vote(age);
}

void vote(int age)
{
    if(age>=18)
        printf("Person is eligible to vote");
    else
        printf("Person is not eligible to vote");
}