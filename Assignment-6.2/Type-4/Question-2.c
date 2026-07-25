#include<stdio.h>

int triangle(int,int,int);

void main()
{
    int a,b,c,res;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    res=triangle(a,b,c);

    if(res==0)
        printf("Triangle is Equilateral");
    else if(res==1)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
}

int triangle(int a,int b,int c)
{
    if(a==b && b==c)
        return 0;
    else if(a==b || b==c || a==c)
        return 1;
    else
        return -1;
}