void addarray(int* arr,int* brr,int* crr,int n);
void main()
{
    int arr[10],brr[10],crr[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<=0 || n>10)
        printf("Number is greater than array size");
    else
    {
        printf("Enter elements of first array:\n");
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        printf("Enter elements of second array:\n");
        for(int i=0;i<n;i++)
            scanf("%d",&brr[i]);

        addarray(arr,brr,crr,n);
    }
}

void addarray(int* arr,int* brr,int* crr,int n)
{
    printf("First array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nSecond array: ");
    for(int i=0;i<n;i++)
        printf("%d ",brr[i]);

    for(int i=0;i<n;i++)
    {
        crr[i]=arr[i]+brr[i];
    }
    printf("\nAddition: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }
}