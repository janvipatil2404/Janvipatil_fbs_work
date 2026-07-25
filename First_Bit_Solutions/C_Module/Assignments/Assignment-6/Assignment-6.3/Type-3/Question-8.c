#include<stdio.h>

void armstrong(int);

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    armstrong(n);
}

void armstrong(int n)
{
    int org,p;
    int sum=0,cube;

    org=n;

    while(n>0)
    {
        p=n%10;
        cube=p*p*p;
        sum=sum+cube;
        n=n/10;
    }

    printf("Sum of cube is %d so ",sum);

    if(org==sum)
        printf("%d is Armstrong Number",org);
    else
        printf("%d is Not Armstrong Number",org);
}