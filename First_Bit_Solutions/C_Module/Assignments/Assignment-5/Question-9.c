void main()
{
	int n;
	printf("Enter the value of n to print stars: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=n;r++)
		{
			if(i==1 || r==1 ||i==n ||r==n)
			printf(" *");
			else
			printf("  ");
		}
			printf("\n");
	}
}