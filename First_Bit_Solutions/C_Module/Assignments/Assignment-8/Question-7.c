void main()
{
    int arr1[10], arr2[10], arr3[20];
    int n1, n2, k = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
        scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
        scanf("%d", &arr2[i]);

    for(int i=0;i<n1;i++)
    {
        arr3[k]=arr1[i];
        k++;
    }

    for(int i=0;i<n2;i++)
    {
        arr3[k]=arr2[i];
        k++;
    }

    printf("Merged Array:\n");
    for(int i=0;i<k;i++)
        printf("%d ", arr3[i]);
}