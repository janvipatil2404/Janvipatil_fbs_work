#include<stdio.h>

int sumdigit(int);

void main()
{
    int n,res;

    printf("Enter the number: ");
    scanf("%d",&n);

    res=sumdigit(n);

    printf("Sum = %d",res);
}

int sumdigit(int n)
{
    int first,last,sum;

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;
    sum=first+last;

    return sum;
}