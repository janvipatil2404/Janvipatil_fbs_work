#include <stdio.h>
void main()
{
    int *arr1, *arr2, *arr3;
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    arr1 = (int*)malloc(n1 * sizeof(int));
    arr2 = (int*)malloc(n2 * sizeof(int));
    arr3 = (int*)malloc((n1 + n2) * sizeof(int));

    printf("Enter first array:\n");
	    for(i = 0; i < n1; i++)
	    {
	        scanf("%d", &arr1[i]);
	    }
	
	    printf("Enter second array:\n");
		    for(i = 0; i < n2; i++)
		    {
		        scanf("%d", &arr2[i]);
		    }
		
			    for(i = 0; i < n1; i++)
			    {
			        arr3[i] = arr1[i];
			    }
			
				    for(j = 0; j < n2; j++)
				    {
				        arr3[i] = arr2[j];
				        i++;
				    }
				
				    printf("Merged array:\n");
					
					    for(i = 0; i < n1 + n2; i++)
					    {
					        printf("%d ", arr3[i]);
					    }

    free(arr1);
    free(arr2);
    free(arr3);
}