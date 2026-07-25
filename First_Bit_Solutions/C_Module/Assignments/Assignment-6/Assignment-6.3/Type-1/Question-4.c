#include<stdio.h>

void prime();

void main()
{
    prime();
}

void prime()
{
    int n,i=2;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("%d is Not Prime",n);
    }
    else
    {
        while(i<n && n%i!=0)
        {
            i++;
        }

        if(i==n)
            printf("%d is Prime",n);
        else
            printf("%d is Not Prime",n);
    }
}