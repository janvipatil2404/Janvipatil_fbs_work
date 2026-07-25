#include<stdio.h>

int sum();

void main()
{
    int res;

    res=sum();

    printf("Sum = %d",res);
}

int sum()
{
    int n,i=1,s=0;

    printf("Enter starting number: ");
    scanf("%d",&n);

    while(i<=5)
    {
        s=s+n;
        n++;
        i++;
    }

    return s;
}