void search(int* arr,int n);
void main()
{
    int arr[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n>10)
        printf("Number is greater than array size");
    else
    {
        printf("Enter elements:\n");
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        search(arr,n);
    }
}
void search(int* arr,int n)
{
    int search,flag=0;
    printf("Elements in array are:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nEnter the element to find: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("Element found at position %d",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Element not found");
}