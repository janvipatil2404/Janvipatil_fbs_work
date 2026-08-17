#include <stdio.h>
#include <string.h>

typedef struct Book
{
    char bname[30];
    int id;
    char author[30];
    float price;
} Book;

void main()
{
    Book b[5];
    int i;

    printf("Enter details of 5 books:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book Name: ");
        scanf("%s", b[i].bname);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);

        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n--- Book Details ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book Name : %s\n", b[i].bname);
        printf("Book ID   : %d\n", b[i].id);
        printf("Author    : %s\n", b[i].author);
        printf("Price     : %.2f\n", b[i].price);
    }
}