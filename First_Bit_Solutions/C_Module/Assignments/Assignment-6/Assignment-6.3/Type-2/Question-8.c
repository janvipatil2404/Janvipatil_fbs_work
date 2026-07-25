#include<stdio.h>

int armstrong();

void main()
{
    int res;

    res=armstrong();

    if(res==0)
        printf("Number is Armstrong");
    else
        printf("Number is Not Armstrong");
}

int armstrong()
{
    int n,org,p;
    int sum=0,cube;

    printf("Enter a number: ");
    scanf("%d",&n);

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