#include<stdio.h>

void sum();

void main()
{
    sum();
}

void sum()
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

    printf("Sum = %d",s);
}