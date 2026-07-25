#include<stdio.h>

void sumdigit();

void main()
{
    sumdigit();
}

void sumdigit()
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

    printf("Sum of first digit '%d' and last digit '%d' = %d",first,last,sum);
}