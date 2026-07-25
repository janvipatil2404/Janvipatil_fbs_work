#include<stdio.h>

int table(int);

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    table(n);
}

int table(int n)
{
    int i=1;

    while(i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }

    return 0;
}