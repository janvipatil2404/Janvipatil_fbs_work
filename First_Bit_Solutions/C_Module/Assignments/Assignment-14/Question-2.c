#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[20];
    double salary;
} employee;

void storeemployee(employee* earr, int size);
void displayemployee(employee* earr, int size);

void main()
{
    employee arr[2];

    printf("Enter employee details:\n");
    storeemployee(arr, 2);

    printf("\nEmployee details:\n");
    displayemployee(arr, 2);
}

void storeemployee(employee* earr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &earr[i].id);

        printf("Enter Name: ");
        scanf("%s", earr[i].name);

        printf("Enter Salary: ");
        scanf("%lf", &earr[i].salary);
    }
}

void displayemployee(employee* earr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\n%d %s %.2lf",earr[i].id,earr[i].name,earr[i].salary);
    }
}