#include<stdio.h>

int sum(int);

void main()
{
    int n,res;

    printf("Enter starting number: ");
    scanf("%d",&n);

    res=sum(n);

    printf("Sum = %d",res);
}

int sum(int n)
{
    int i=1,s=0;

    while(i<=5)
    {
        s=s+n;
        n++;
        i++;
    }

    return s;
}