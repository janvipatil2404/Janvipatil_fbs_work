void evenodd(int* arr,int n);
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
        {
            scanf("%d",&arr[i]);
        }
        evenodd(arr,n);
    }
}

void evenodd(int* arr,int n)
{
    printf("Elements in array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEven numbers are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }

    printf("\nOdd numbers are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}