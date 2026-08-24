#include<stdio.h>
void main()
{
	int n;
	int temp=0;
	printf("Enter your number to print 1: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		temp=temp*10+1;
		printf("%d", temp);
			if(i<n-1)
				printf(" + ");
	}
	
}