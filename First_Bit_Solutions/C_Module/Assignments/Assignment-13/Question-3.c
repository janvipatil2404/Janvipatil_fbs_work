#include <stdio.h>
void main()
{
    int *arr, n, i;
    int sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
	    for(i = 0; i < n; i++)
	        scanf("%d", &arr[i]);
	
		    for(i = 0; i < n; i++)
		        sum = sum + arr[i];

   	    printf("Sum = %d", sum);

    free(arr);
}