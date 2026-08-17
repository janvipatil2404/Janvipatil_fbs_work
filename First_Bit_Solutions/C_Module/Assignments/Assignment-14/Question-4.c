#include <stdio.h>
#include <string.h>

typedef struct hr
{
    int id;
    char name[20];
    double salary;
    double commission;
} hr;

void storehr(hr* harr, int size);
void displayhr(hr* harr, int size);

void main()
{
    hr arr[2];

    printf("Enter HR details:\n");
    storehr(arr, 2);

    printf("\nHR details:\n");
    displayhr(arr, 2);
}

void storehr(hr* harr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &harr[i].id);

        printf("Enter Name: ");
        scanf("%s", harr[i].name);

        printf("Enter Salary: ");
        scanf("%lf", &harr[i].salary);

        printf("Enter Commission: ");
        scanf("%lf", &harr[i].commission);
    }
}

void displayhr(hr* harr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nHR %d", i + 1);
        printf("\nID: %d", harr[i].id);
        printf("\nName: %s", harr[i].name);
        printf("\nSalary: %.2lf", harr[i].salary);
        printf("\nCommission: %.2lf\n", harr[i].commission);
    }
}