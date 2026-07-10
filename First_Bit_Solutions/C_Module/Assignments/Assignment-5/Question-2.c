#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n to print right angled triangle: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=i;r++)
		{
			printf(" *");
		}
			printf("\n");
	}
}