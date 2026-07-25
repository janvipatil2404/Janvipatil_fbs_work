#include<stdio.h>

void perfect();

void main()
{
    perfect();
}

void perfect()
{
    int n,i=1,sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(n==sum)
        printf("%d is Perfect Number",n);
    else
        printf("%d is Not Perfect Number",n);
}