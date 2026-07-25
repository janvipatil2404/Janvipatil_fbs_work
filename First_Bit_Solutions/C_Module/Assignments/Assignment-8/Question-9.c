void main()
{
    int arr[10];
	int n,temp=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n<=0||n>10)
        printf("Number is greater then array size");

    else
    {
        printf("Enter elements:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Elements in array are: \n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", arr[i]);
        }
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }

        printf("\nSorted Elements in array are: \n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", arr[i]);
        }
    }
}