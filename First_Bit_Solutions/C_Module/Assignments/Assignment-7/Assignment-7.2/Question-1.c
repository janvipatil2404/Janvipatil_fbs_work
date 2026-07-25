#include<stdio.h>

void calc(int*,int*,char*);
void main()
{
    int a,b;
    char o;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter operator: ");
    scanf(" %c",&o);
    calc(&a,&b,&o);
}
void calc(int* a,int* b,char* o)
{
    int result;
    if(*o=='*')
        result=*a * *b;
    else if(*o=='/')
        result=*a / *b;
    else if(*o=='%')
        result=*a % *b;
    else if(*o=='+')
        result=*a + *b;
    else if(*o=='-')
        result=*a - *b;
    else
    {
        printf("Use Correct operator");
        return;
    }
    printf("Result = %d",result);
}