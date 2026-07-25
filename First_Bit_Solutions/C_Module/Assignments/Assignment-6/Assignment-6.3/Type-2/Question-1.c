#include<stdio.h>

int display();

void main()
{
    display();
}

int display()
{
    int no=1;

    while(no<=10)
    {
        printf("%d ",no);
        no++;
    }

    return 0;
}