#include<stdio.h>

void perfect(int);

void main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    perfect(n);
}

void perfect(int n)
{
    int sum=0;

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        printf("%d is Perfect Number",n);
    else
        printf("%d is Not Perfect Number",n);
}