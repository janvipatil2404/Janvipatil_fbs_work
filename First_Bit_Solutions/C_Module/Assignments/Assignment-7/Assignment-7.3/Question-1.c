#include<stdio.h>

void display(int*);
void main()
{
    int n=10;
    display(&n);
}

void display(int* n)
{
    int no=1;
    while(no<=*n)
    {
        printf("%d ",no);
        no++;
    }
}