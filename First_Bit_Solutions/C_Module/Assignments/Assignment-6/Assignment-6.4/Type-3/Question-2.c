#include<stdio.h>

void prime(int);

void main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    prime(n);
}

void prime(int n)
{
    int flag=0;

    if(n<=1)
    {
        printf("Number is not Prime");
        return;
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Number is Prime");
    else
        printf("Number is not Prime");
}