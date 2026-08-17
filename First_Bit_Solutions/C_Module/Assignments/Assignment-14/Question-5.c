#include <stdio.h>
#include <string.h>

typedef struct salesmanager
{
    int id;
    char name[20];
    double salary;
    double incentive;
    int target;
} salesmanager;

void storesalesmanager(salesmanager* smarr, int size);
void displaysalesmanager(salesmanager* smarr, int size);

void main()
{
    salesmanager arr[2];

    printf("Enter Sales Manager details:\n");
    storesalesmanager(arr, 2);

    printf("\nSales Manager details:\n");
    displaysalesmanager(arr, 2);
}

void storesalesmanager(salesmanager* smarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &smarr[i].id);

        printf("Enter Name: ");
        scanf("%s", smarr[i].name);

        printf("Enter Salary: ");
        scanf("%lf", &smarr[i].salary);

        printf("Enter Incentive: ");
        scanf("%lf", &smarr[i].incentive);

        printf("Enter Target: ");
        scanf("%d", &smarr[i].target);
    }
}

void displaysalesmanager(salesmanager* smarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nSales Manager %d", i + 1);
        printf("\nID: %d", smarr[i].id);
        printf("\nName: %s", smarr[i].name);
        printf("\nSalary: %.2lf", smarr[i].salary);
        printf("\nIncentive: %.2lf", smarr[i].incentive);
        printf("\nTarget: %d\n", smarr[i].target);
    }
}