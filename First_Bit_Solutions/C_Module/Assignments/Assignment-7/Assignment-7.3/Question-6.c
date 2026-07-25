#include<stdio.h>

void sumdigit(int*);
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sumdigit(&n);
}

void sumdigit(int* n)
{
    int first,last,sum;
    last=*n%10;
    while(*n>=10)
    {
        *n=*n/10;
    }
    first=*n;
    sum=first+last;
    printf("Sum of first digit '%d' and last digit '%d' = %d",first,last,sum);
}