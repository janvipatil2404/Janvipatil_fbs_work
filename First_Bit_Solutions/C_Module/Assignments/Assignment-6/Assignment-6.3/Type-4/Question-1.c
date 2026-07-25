#include<stdio.h>

int display(int);

void main()
{
    int n=10;

    display(n);
}

int display(int n)
{
    int no=1;

    while(no<=n)
    {
        printf("%d ",no);
        no++;
    }

    return 0;
}