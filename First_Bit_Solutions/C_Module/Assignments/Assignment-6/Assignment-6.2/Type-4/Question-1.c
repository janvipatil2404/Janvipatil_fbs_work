#include<stdio.h>

int calc(int,int,char);

void main()
{
    int a,b,result;
    char o;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator: ");
    scanf(" %c",&o);

    result=calc(a,b,o);

    printf("Result = %d",result);
}

int calc(int a,int b,char o)
{
    if(o=='*')
        return a*b;
    else if(o=='/')
        return a/b;
    else if(o=='%')
        return a%b;
    else if(o=='+')
        return a+b;
    else if(o=='-')
        return a-b;
    else
    {
        printf("Use Correct operator");
        return 0;
    }
}