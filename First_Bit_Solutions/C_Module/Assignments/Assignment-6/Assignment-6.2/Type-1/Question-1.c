#include<stdio.h>

void calc();

void main()
{
    calc();
}

void calc()
{
    int a,b,result;
    char o;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator: ");
    scanf(" %c",&o);

    if(o=='*')
    {
        result=a*b;
        printf("Answer using '%c' operator is %d",o,result);
    }
    else if(o=='/')
    {
        result=a/b;
        printf("Answer using '%c' operator is %d",o,result);
    }
    else if(o=='%')
    {
        result=a%b;
        printf("Answer using '%c' operator is %d",o,result);
    }
    else if(o=='+')
    {
        result=a+b;
        printf("Answer using '%c' operator is %d",o,result);
    }
    else if(o=='-')
    {
        result=a-b;
        printf("Answer using '%c' operator is %d",o,result);
    }
    else
    {
        printf("Use Correct operator");
    }
}