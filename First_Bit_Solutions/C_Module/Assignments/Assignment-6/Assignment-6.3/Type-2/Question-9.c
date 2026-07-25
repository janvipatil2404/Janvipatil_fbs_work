#include<stdio.h>

int strong();

void main()
{
    int res;

    res=strong();

    if(res==0)
        printf("Number is Strong");
    else
        printf("Number is Not Strong");
}

int strong()
{
    int n,org,p;
    int sum=0,factorial,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    org=n;

    while(n>0)
    {
        p=n%10;
        factorial=1;
        i=1;

        while(i<=p)
        {
            factorial=factorial*i;
            i++;
        }

        sum=sum+factorial;
        n=n/10;
    }

    if(org==sum)
        return 0;
    else
        return 1;
}