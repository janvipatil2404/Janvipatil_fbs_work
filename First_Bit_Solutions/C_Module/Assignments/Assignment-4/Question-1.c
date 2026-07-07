void main()
{
int n,o,count=0;
int a,sum=0;

    printf("Enter the number: ");
    scanf("%d", &n);
    o = n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=o;
    while(n>0)
    {
    	a=n%10;
    	int res=1;
    	for(int i=1;i<=count;i++)
    		{
			res=res*a;
		}
    		
    	sum=sum+res;
    	n=n/10;
	}
	if(sum==o)
		printf("Number is Armstrong");
	else
		printf("Number is not Armstrong");
}