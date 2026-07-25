#include<stdio.h>

int table();

void main()
{
    table();
}

int table()
{
    int n,i=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=10)
    {
        printf("%d ",n*i);
        i++;
    }

    return 0;
}