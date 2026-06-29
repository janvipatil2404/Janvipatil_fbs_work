#include<stdio.h>
void main()
{
	float english=95,hindi=96,marathi=100,science=80,maths=90;
	float percentage;
	percentage= (english+hindi+marathi+science+maths)/500*100;
	printf("Percentage of student is %f%%",percentage);
}