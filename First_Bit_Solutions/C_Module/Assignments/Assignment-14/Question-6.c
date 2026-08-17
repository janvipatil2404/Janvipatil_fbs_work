#include <stdio.h>
#include <string.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void storedate(date* darr, int size);
void displaydate(date* darr, int size);

void main()
{
    date arr[2];

    printf("Enter date details:\n");
    storedate(arr, 2);

    printf("\nDate details:\n");
    displaydate(arr, 2);
}

void storedate(date* darr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter Date: ");
        scanf("%d", &darr[i].date);

        printf("Enter Month: ");
        scanf("%d", &darr[i].month);

        printf("Enter Year: ");
        scanf("%d", &darr[i].year);
    }
}

void displaydate(date* darr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nDate %d", i + 1);
        printf("\nDate: %02d/%02d/%04d\n",darr[i].date,darr[i].month,darr[i].year);
    }
}