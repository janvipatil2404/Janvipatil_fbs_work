#include<stdio.h>

int check();

void main()
{
    int res;

    res=check();

    if(res==0)
        printf("Number is divisible by both 3 and 5");
    else if(res==1)
        printf("Number is divisible by 3 but not by 5");
    else if(res==2)
        printf("Number is divisible by 5 but not by 3");
    else
        printf("Number is not divisible by both 3 and 5");
}

int check()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%3==0 && a%5==0)
        return 0;
    else if(a%3==0 && a%5!=0)
        return 1;
    else if(a%3!=0 && a%5==0)
        return 2;
    else
        return 3;
}