#include <stdio.h>
void main()
{
    int *arr, n, i, j;
    int count;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        if(arr[i] > 1)
        {
            for(j = 1; j <= arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    count++;
                }
            }

            if(count == 2)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    free(arr);
}