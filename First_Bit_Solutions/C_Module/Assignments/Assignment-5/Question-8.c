#include<stdio.h>
void main()
{
	int i,n,r;
	printf("Enter the value of n to print diamond ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
    {
        for(r=1;r<=n-i;r++)
            printf(" ");
        for(r=1;r<=i;r++)
            printf("* ");
        printf("\n");
    }
   for(i=n-1;i>=1;i--)
    {
        for(r=1;r<=n-i;r++)
            printf(" ");
        for(r=1;r<=i;r++)
            printf("* ");
        printf("\n");
    }

}