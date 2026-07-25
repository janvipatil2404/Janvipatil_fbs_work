#include<stdio.h>

int prime(int);

void main()
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d",&n);

    res=prime(n);

    if(res==0)
        printf("%d is Prime",n);
    else
        printf("%d is Not Prime",n);
}

int prime(int n)
{
    int i=2;

    if(n<=1)
        return 1;

    while(i<n && n%i!=0)
    {
        i++;
    }

    if(i==n)
        return 0;
    else
        return 1;
}