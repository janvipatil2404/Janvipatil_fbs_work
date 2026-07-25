#include<stdio.h>

int greatest(int,int,int);

void main()
{
    int a,b,c,res;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    res=greatest(a,b,c);

    printf("%d is greatest among all three numbers",res);
}

int greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}