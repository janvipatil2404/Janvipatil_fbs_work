void main()
{
	int n,i,r;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
    {
        for(r=1;r<=n-i;r++)
            printf(" ");
        for(r=1;r<=i;r++)
            printf("* ");
        printf("\n");
    }
}