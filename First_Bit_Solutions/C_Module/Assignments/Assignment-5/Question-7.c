#include<stdio.h>
void main()
{
	int n,f=0;
	printf("Enter the value of n to print floyds triangle: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=i;r++)
		{
			f=f+1;
			printf("%d ",f);
		}
			printf("\n");
	}
}