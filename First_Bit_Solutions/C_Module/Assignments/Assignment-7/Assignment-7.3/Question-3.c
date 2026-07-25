#include<stdio.h>

void sum(int*);
void main()
{
    int n;
    printf("Enter starting number: ");
    scanf("%d",&n);
    sum(&n);
}
void sum(int* n)
{
    int i=1,s=0;
    while(i<=5)
    {
        s=s+*n;
        (*n)++;
        i++;
    }
    printf("Sum = %d",s);
}