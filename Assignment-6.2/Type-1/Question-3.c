#include<stdio.h>

void greatest();

void main()
{
    greatest();
}

void greatest()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        printf("%d is greatest among all three numbers",a);
    else if(b>=a && b>=c)
        printf("%d is greatest among all three numbers",b);
    else
        printf("%d is greatest among all three numbers",c);
}