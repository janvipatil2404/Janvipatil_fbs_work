#include <stdio.h>
#include <string.h>

typedef struct product
{
    int id;
    char name[20];
    int quantity;
    double price;
} product;

void storeproduct(product* parr, int size);
void displayproduct(product* parr, int size);

void main()
{
    product arr[2];

    printf("Enter product details:\n");
    storeproduct(arr, 2);

    printf("\nProduct details:\n");
    displayproduct(arr, 2);
}

void storeproduct(product* parr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &parr[i].id);

        printf("Enter Name: ");
        scanf("%s", parr[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &parr[i].quantity);

        printf("Enter Price: ");
        scanf("%lf", &parr[i].price);
    }
}

void displayproduct(product* parr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nProduct %d", i + 1);
        printf("\nID: %d", parr[i].id);
        printf("\nName: %s", parr[i].name);
        printf("\nQuantity: %d", parr[i].quantity);
        printf("\nPrice: %.2lf\n", parr[i].price);
    }
}