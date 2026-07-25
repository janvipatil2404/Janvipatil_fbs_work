#include<stdio.h>

int factorial(int);

void main()
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d",&n);

    res=factorial(n);

    printf("Factorial = %d",res);
}

int factorial(int n)
{
    int i=1,fact=1;

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    return fact;
}