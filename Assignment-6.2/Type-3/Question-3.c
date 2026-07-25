#include<stdio.h>

void greatest(int,int,int);

void main()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    greatest(a,b,c);
}

void greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
        printf("%d is greatest among all three numbers",a);
    else if(b>=a && b>=c)
        printf("%d is greatest among all three numbers",b);
    else
        printf("%d is greatest among all three numbers",c);
}