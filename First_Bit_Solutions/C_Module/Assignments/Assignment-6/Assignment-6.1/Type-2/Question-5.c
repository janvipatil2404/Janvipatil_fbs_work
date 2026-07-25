#include<stdio.h>

int vote();

void main()
{
    int res;

    res = vote();

    if(res==0)
        printf("Person is eligible to vote");
    else
        printf("Person is not eligible to vote");
}

int vote()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age>=18)
        return 0;
    else
        return 1;
}