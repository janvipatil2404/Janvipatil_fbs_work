#include<stdio.h>

void triangle();

void main()
{
    triangle();
}

void triangle()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
        printf("Triangle is Equilateral");
    else if(a==b || b==c || a==c)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
}