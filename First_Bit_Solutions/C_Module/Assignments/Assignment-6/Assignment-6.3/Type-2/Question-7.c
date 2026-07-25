#include<stdio.h>

int sumdigit();

void main()
{
    int res;

    res=sumdigit();

    printf("Sum = %d",res);
}

int sumdigit()
{
    int n;
    int first,last,sum;

    printf("Enter the number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;
    sum=first+last;

    return sum;
}