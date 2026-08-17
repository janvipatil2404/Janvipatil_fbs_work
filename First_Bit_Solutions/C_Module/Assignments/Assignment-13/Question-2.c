#include <stdio.h>
void main()
{
    int *arr, n, i, num;
    int found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found at index %d", i);
    else
        printf("Number not found");

    free(arr);
}