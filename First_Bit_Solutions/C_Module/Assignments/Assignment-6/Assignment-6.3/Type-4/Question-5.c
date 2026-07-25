#include<stdio.h>

int perfect(int);

void main()
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d",&n);

    res=perfect(n);

    if(res==0)
        printf("%d is Perfect Number",n);
    else
        printf("%d is Not Perfect Number",n);
}

int perfect(int n)
{
    int i=1,sum=0;

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(n==sum)
        return 0;
    else
        return 1;
}