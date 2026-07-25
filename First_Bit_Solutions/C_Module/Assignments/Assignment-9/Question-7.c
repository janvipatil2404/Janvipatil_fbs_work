void merge(int* arr1,int* arr2,int* arr3,int n1,int n2);

void main()
{
    int arr1[10],arr2[10],arr3[20];
    int n1,n2;
    printf("Enter number of elements in first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d",&n2);

    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
        
    merge(arr1,arr2,arr3,n1,n2);
}

void merge(int* arr1,int* arr2,int* arr3,int n1,int n2)
{
    int i,j=0;

    for(i=0;i<n1;i++)
    {
        arr3[j]=arr1[i];
        j++;
    }

    for(i=0;i<n2;i++)
    {
        arr3[j]=arr2[i];
        j++;
    }

    printf("Merged Array:\n");
    for(i=0;i<j;i++)
    {
        printf("%d ",arr3[i]);
    }
}