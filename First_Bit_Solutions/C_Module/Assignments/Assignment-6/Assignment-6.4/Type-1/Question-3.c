#include<stdio.h>

void perfect();

void main()
{
    perfect();
}

void perfect()
{
    int n,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

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