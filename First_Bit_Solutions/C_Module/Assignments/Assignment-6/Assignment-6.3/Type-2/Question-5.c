#include<stdio.h>

int perfect();

void main()
{
    int res;

    res=perfect();

    if(res==0)
        printf("Number is Perfect");
    else
        printf("Number is Not Perfect");
}

int perfect()
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
        return 0;
    else
        return 1;
}