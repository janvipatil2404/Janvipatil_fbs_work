void alternate(int* arr,int n);
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

        alternate(arr,n);
    }
}

void alternate(int* arr,int n)
{
    printf("Elements in array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nAlternate numbers in array are: ");
    for(int i=0;i<n;i+=2)
    {
        printf("%d ",arr[i]);
    }
}