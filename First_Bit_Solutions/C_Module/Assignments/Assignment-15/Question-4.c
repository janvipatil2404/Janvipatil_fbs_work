#include <stdio.h>

typedef struct Product
{
    char name[30];
    float price;
    int quantity;
} Product;

void displayProducts(Product p[], int size)
{
    int i;

    printf("\n--- Products ---\n");

    for(i = 0; i < size; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Name     : %s\n", p[i].name);
        printf("Price    : %.2f\n", p[i].price);
        printf("Quantity : %d\n", p[i].quantity);
    }
}

void calculateTotal(Product p[], int size)
{
    int i;
    float total = 0;

    printf("\n--- BILL ---\n");

    for(i = 0; i < size; i++)
    {
        printf("%s : %.2f x %d = %.2f\n",
               p[i].name,
               p[i].price,
               p[i].quantity,
               p[i].price * p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }

    printf("-------------------------\n");
    printf("Total Cost = %.2f\n", total);
}

void main()
{
    Product p[5] =
    {
        {"Pen", 10, 2},
        {"Book", 50, 3},
        {"Pencil", 5, 4},
        {"Notebook", 80, 2},
        {"Bag", 500, 1}
    };

    int choice = -1;

    while(choice != 0)
    {
        printf("\n===== POINT OF SALE SYSTEM =====\n");
        printf("1. Display Products\n");
        printf("2. Calculate Total Bill\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayProducts(p, 5);
                break;

            case 2:
                calculateTotal(p, 5);
                break;

            case 0:
                printf("\nThank you!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
}