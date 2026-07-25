#include<stdio.h>

void perfect(int*);
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    perfect(&n);
}

void perfect(int* n)
{
    int i=1,sum=0;
    while(i<*n)
    {
        if(*n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(*n==sum)
        printf("%d is Perfect Number",*n);
    else
        printf("%d is Not Perfect Number",*n);
}