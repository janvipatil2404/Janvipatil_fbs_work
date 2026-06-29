#include<stdio.h>
void main()
{
	int a=20,b=30,c;
	c=a;
	a=b;
	b=c;
	printf("swapped numbers are a = %d and b = %d", a,b);
}