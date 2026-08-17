#include <stdio.h>
#include <string.h>

typedef struct distance
{
    int feet;
    int inch;
} distance;

void storedistance(distance* darr, int size);
void displaydistance(distance* darr, int size);

void main()
{
    distance arr[2];

    printf("Enter distance details:\n");
    storedistance(arr, 2);

    printf("\nDistance details:\n");
    displaydistance(arr, 2);
}

void storedistance(distance* darr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter Feet: ");
        scanf("%d", &darr[i].feet);

        printf("Enter Inch: ");
        scanf("%d", &darr[i].inch);
    }
}

void displaydistance(distance* darr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nDistance %d", i + 1);
        printf("\nDistance: %d' %d\"\n",
               darr[i].feet,
               darr[i].inch);
    }
}