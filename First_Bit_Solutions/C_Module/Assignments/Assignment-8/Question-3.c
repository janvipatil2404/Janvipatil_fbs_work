void main()
{
	int arr[10];
	int n,sum=0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	if(n<=0||n>10)
	{
		printf("Number is greater then array size");
	}
	else 
	{
			printf("Enter elements: \n");
		for(int i=0;i<n;i++)
		{
			scanf("%d", &arr[i]);
		}
		printf("Elements in array are: \n");
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		for(int i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		printf("\nSum of elements in array is: %d", sum);
		
	}
	
}