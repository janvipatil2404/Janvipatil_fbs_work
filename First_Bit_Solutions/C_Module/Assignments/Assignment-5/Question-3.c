void main()
{
	int n,r,s;
	printf("Enter the value of n to print an inverted right-angled triangle: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(r=n;r>=i;r--)
		{
			printf(" *");
			
		}
			printf("\n");
	}
}