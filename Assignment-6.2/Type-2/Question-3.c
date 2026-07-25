#include<stdio.h>

int greatest();

void main()
{
    int res;

    res=greatest();

    printf("%d is greatest among all three numbers",res);
}

int greatest()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}