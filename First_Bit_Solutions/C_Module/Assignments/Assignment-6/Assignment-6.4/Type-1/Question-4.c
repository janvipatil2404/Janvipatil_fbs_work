#include<stdio.h>

void strong();

void main()
{
    strong();
}

void strong()
{
    int n,r;
    int i,fact,sum=0;
    int org;

    printf("Enter the number: ");
    scanf("%d",&n);

    org=n;

    while(n>0)
    {
        r=n%10;
        fact=1;

        for(i=1;i<=r;i++)
            fact=fact*i;

        sum=sum+fact;
        n=n/10;
    }

    if(org==sum)
        printf("Number is Strong");
    else
        printf("Number is Not Strong");
}