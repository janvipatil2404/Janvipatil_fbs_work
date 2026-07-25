#include<stdio.h>

void factorial();

void main()
{
    factorial();
}

void factorial()
{
    int n,i=1,fact=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    printf("Factorial = %d",fact);
}