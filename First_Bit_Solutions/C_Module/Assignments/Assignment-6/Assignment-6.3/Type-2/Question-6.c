#include<stdio.h>

int factorial();

void main()
{
    int res;

    res=factorial();

    printf("Factorial = %d",res);
}

int factorial()
{
    int n,i=1,fact=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    return fact;
}