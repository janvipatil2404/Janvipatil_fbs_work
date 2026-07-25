void main()
{
	int arr[10];
	int n,search;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	if(n>10)
		printf("Number is greater then array size");
	else 
	{
		printf("Enter elements: \n");
		for(int i=0;i<n;i++)
			scanf("%d", &arr[i]);
			
		printf("Elements in array are: \n");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
			
		int flag=0;
		printf("\nEnter the element to find: ");
		scanf("%d", &search);
		
		for(int i=0;i<n;i++)
		{
			if(arr[i]==search)
			{
				printf("Element found in position %d: ", i+1);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("Element not found");	
	}	
}
