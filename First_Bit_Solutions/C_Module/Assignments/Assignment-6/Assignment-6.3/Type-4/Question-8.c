#include<stdio.h>

int armstrong(int);

void main()
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d",&n);

    res=armstrong(n);

    if(res==0)
        printf("%d is Armstrong Number",n);
    else
        printf("%d is Not Armstrong Number",n);
}

int armstrong(int n)
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

    if(org==sum)
        return 0;
    else
        return 1;
}