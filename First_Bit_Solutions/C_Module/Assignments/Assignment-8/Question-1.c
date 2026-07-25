void main()
{
	int arr[10];
	int n,max,min;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	if(n>10)
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
		max=arr[0];
		min=arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]>max)
				max=arr[i];
			if(arr[i]<min)
				min=arr[i];
		}
		printf("\nMaximum Element in array is: %d\n", max);
		printf("Minimum Element in array is: %d\n", min);
	}
}