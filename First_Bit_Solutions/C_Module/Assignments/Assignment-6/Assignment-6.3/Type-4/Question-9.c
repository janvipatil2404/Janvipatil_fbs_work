#include<stdio.h>

int strong(int);

void main()
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d",&n);

    res=strong(n);

    if(res==0)
        printf("%d is Strong Number",n);
    else
        printf("%d is Not Strong Number",n);
}

int strong(int n)
{
    int org,p;
    int sum=0,factorial,i;

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