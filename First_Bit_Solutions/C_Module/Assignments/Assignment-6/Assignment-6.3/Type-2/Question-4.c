#include<stdio.h>

int prime();

void main()
{
    int res;

    res=prime();

    if(res==0)
        printf("Number is Prime");
    else
        printf("Number is Not Prime");
}

int prime()
{
    int n,i=2;

    printf("Enter a number: ");
    scanf("%d",&n);

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