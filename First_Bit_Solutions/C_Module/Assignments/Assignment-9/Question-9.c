void sort(int* arr,int n);
void main()
{
    int arr[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<=0 || n>10)
        printf("Number is greater than array size");
    else
    {
        printf("Enter elements:\n");
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        sort(arr,n);
    }
}

void sort(int* arr,int n)
{
    int temp;
    printf("Elements in array are:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nSorted elements in array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}