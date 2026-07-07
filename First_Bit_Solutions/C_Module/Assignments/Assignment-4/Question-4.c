void main()
{
    int n,r;
    int i,fact,sum=0;
    int org;

    printf("Enter the number: ");
    scanf("%d", &n);

    org=n;

    while(n>0)
    {
        r=n%10;
        fact=1;

        for(i=1;i<=r;i++)
            fact=fact*i;
        sum = sum + fact;
        n = n / 10;
    }
	if(org==sum)
		printf("number is strong");
	else
		printf("number is not strong");
}