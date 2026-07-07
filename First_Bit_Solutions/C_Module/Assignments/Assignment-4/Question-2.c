void main()
{
int n;
int flag=0;

    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=2;i<n;i++)
    {
	if(n%i==0)
		{
			flag=1; 
			break;
		}
	}	
		if(flag==0)
			printf("Number is Prime ");
		else 
			printf("Number is not Prime ");
}
