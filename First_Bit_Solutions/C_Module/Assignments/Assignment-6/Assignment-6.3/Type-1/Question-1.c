#include<stdio.h>

void display();

void main()
{
    display();
}

void display()
{
    int no=1;

    while(no<=10)
    {
        printf("%d ",no);
        no++;
    }
}