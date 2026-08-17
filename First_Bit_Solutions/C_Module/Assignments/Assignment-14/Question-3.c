#include <stdio.h>
#include <string.h>

typedef struct admin
{
    int id;
    char name[20];
    double salary;
    double allowance;
} admin;

void storeadmin(admin* aarr, int size);
void displayadmin(admin* aarr, int size);

void main()
{
    admin arr[2];

    printf("Enter admin details:\n");
    storeadmin(arr, 2);

    printf("\nAdmin details:\n");
    displayadmin(arr, 2);
}

void storeadmin(admin* aarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &aarr[i].id);

        printf("Enter Name: ");
        scanf("%s", aarr[i].name);

        printf("Enter Salary: ");
        scanf("%lf", &aarr[i].salary);

        printf("Enter Allowance: ");
        scanf("%lf", &aarr[i].allowance);
    }
}

void displayadmin(admin* aarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nAdmin %d", i + 1);
        printf("\nID: %d", aarr[i].id);
        printf("\nName: %s", aarr[i].name);
        printf("\nSalary: %.2lf", aarr[i].salary);
        printf("\nAllowance: %.2lf\n", aarr[i].allowance);
    }
}