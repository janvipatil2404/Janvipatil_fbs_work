void reverse(int* arr,int n);
void main()
{
    int arr[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    if(n<=0 || n>10)
    {
        printf("Number is greater than array size");
    }
    else
    {
        printf("Enter elements:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        reverse(arr,n);
    }
}

void reverse(int* arr,int n)
{
    int temp;
    printf("Original elements in array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nReversed elements in array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}