#include <stdio.h>
void main()
{
    int *arr, n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements: ");

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}