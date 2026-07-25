#include<stdio.h>

int vote(int);

void main()
{
    int age, res;

    printf("Enter age: ");
    scanf("%d", &age);

    res = vote(age);

    if(res==0)
        printf("Person is eligible to vote");
    else
        printf("Person is not eligible to vote");
}

int vote(int age)
{
    if(age>=18)
        return 0;
    else
        return 1;
}