#include <stdio.h>
#include <string.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;

void storetime(time* tarr, int size);
void displaytime(time* tarr, int size);

void main()
{
    time arr[2];

    printf("Enter time details:\n");
    storetime(arr, 2);

    printf("\nTime details:\n");
    displaytime(arr, 2);
}

void storetime(time* tarr, int size)
{
    int totalmin;

    for(int i = 0; i < size; i++)
    {
        printf("\nEnter Time in minutes: ");
        scanf("%d", &totalmin);

        tarr[i].hour = totalmin / 60;
        tarr[i].min = totalmin % 60;
        tarr[i].sec = 0;
    }
}

void displaytime(time* tarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nTime %d", i + 1);
        printf("\nTime: %02d:%02d:%02d\n",tarr[i].hour,tarr[i].min,tarr[i].sec);
    }
}