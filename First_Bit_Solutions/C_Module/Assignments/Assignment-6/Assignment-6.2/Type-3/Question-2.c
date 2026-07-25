#include<stdio.h>

void triangle(int,int,int);

void main()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    triangle(a,b,c);
}

void triangle(int a,int b,int c)
{
    if(a==b && b==c)
        printf("Triangle is Equilateral");
    else if(a==b || b==c || a==c)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
}