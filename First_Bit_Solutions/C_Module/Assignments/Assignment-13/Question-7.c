#include <stdio.h>
void main()
{
    int *arr1, *arr2, *arr3;
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    arr1 = (int*)malloc(n * sizeof(int));
    arr2 = (int*)malloc(n * sizeof(int));
    arr3 = (int*)malloc(n * sizeof(int));

    printf("Enter first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter second array:\n");
	    for(i = 0; i < n; i++)
	    {
	        scanf("%d", &arr2[i]);
	    }
	
		    for(i = 0; i < n; i++)
		    {
		        arr3[i] = arr1[i] + arr2[i];
		    }
		
		    printf("Third array:\n");
		
			    for(i = 0; i < n; i++)
			    {
			        printf("%d ", arr3[i]);
			    }

    free(arr1);
    free(arr2);
    free(arr3);
}