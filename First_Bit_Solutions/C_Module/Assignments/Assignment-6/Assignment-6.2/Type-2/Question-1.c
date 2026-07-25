#include<stdio.h>

int calc();

void main()
{
    int result;

    result=calc();

    printf("Result = %d",result);
}

int calc()
{
    int a,b,result;
    char o;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator: ");
    scanf(" %c",&o);

    if(o=='*')
        result=a*b;
    else if(o=='/')
        result=a/b;
    else if(o=='%')
        result=a%b;
    else if(o=='+')
        result=a+b;
    else if(o=='-')
        result=a-b;
    else
    {
        printf("Use Correct operator");
        return 0;
    }

    return result;
}