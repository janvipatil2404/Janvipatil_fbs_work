#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Book
{
    int id;
    char name[100];
    char author[100];
    char category[50];
    float price;
    float rating;
} Book;

void showBook(Book);
void displayBooks(Book[], int);
void addBook(Book[], int *, int *);
void removeBook(Book[], int *);
void searchBook(Book[], int);
void searchById(Book[], int);
void searchByName(Book[], int);
void showAuthorBooks(Book[], int);
void showCategoryBooks(Book[], int);
void updateBook(Book[], int);
void sortBooks(Book[], int);
void top3Books(Book[], int);
int findBookById(Book[], int, int);
int compareName(char[], char[]);

int main()
{
    int capacity=10;
    int n=10;
    int choice;

    Book *b=(Book *)malloc(capacity * sizeof(Book));
    if (b==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    b[0].id = 101;
    strcpy(b[0].name, "The Alchemist");
    strcpy(b[0].author, "Paulo Coelho");
    strcpy(b[0].category, "Fiction");
    b[0].price = 450;
    b[0].rating = 4.6;

    b[1].id = 102;
    strcpy(b[1].name, "Wings of Fire");
    strcpy(b[1].author, "A.P.J. Abdul Kalam");
    strcpy(b[1].category, "Biography");
    b[1].price = 300;
    b[1].rating = 4.8;

    b[2].id = 103;
    strcpy(b[2].name, "Harry Potter");
    strcpy(b[2].author, "J.K. Rowling");
    strcpy(b[2].category, "Fantasy");
    b[2].price = 800;
    b[2].rating = 4.9;

    b[3].id = 104;
    strcpy(b[3].name, "Rich Dad Poor Dad");
    strcpy(b[3].author, "Robert Kiyosaki");
    strcpy(b[3].category, "Finance");
    b[3].price = 550;
    b[3].rating = 4.5;

    b[4].id = 105;
    strcpy(b[4].name, "Atomic Habits");
    strcpy(b[4].author, "James Clear");
    strcpy(b[4].category, "Self Help");
    b[4].price = 650;
    b[4].rating = 4.9;

    b[5].id = 106;
    strcpy(b[5].name, "Shyamchi Aai");
    strcpy(b[5].author, "Sane Guruji");
    strcpy(b[5].category, "Marathi Literature");
    b[5].price = 250;
    b[5].rating = 4.8;

    b[6].id = 107;
    strcpy(b[6].name, "Mrityunjay");
    strcpy(b[6].author, "Shivaji Sawant");
    strcpy(b[6].category, "Marathi Historical");
    b[6].price = 600;
    b[6].rating = 4.9;

    b[7].id = 108;
    strcpy(b[7].name, "Kosala");
    strcpy(b[7].author, "Bhalchandra Nemade");
    strcpy(b[7].category, "Marathi Literature");
    b[7].price = 400;
    b[7].rating = 4.5;

    b[8].id = 109;
    strcpy(b[8].name, "Batatyachi Chaal");
    strcpy(b[8].author, "P. L. Deshpande");
    strcpy(b[8].category, "Marathi Comedy");
    b[8].price = 350;
    b[8].rating = 4.7;

    b[9].id = 110;
    strcpy(b[9].name, "The Hobbit");
    strcpy(b[9].author, "J.R.R. Tolkien");
    strcpy(b[9].category, "Fantasy");
    b[9].price = 700;
    b[9].rating = 4.7;

    while (1)
    {
        printf("\n------------------BOOK MANAGEMENT SYSTEM------------------\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book Data\n");
        printf("7. Sort Books\n");
        printf("8. Display All Books\n");
        printf("9. Display Top 3 Books\n");
        printf("0. Exit\n");
        printf("----------------------------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice==0)
        {
            printf("\nThank you for using Book Management System!\n");
            break;
        }
        else if (choice==1)
            addBook(b,&n,&capacity);
        else if (choice==2)
            removeBook(b, &n);
        else if (choice==3)
            searchBook(b, n);
        else if (choice==4)
            showAuthorBooks(b, n);
        else if (choice==5)
            showCategoryBooks(b, n);
        else if (choice==6)
            updateBook(b, n);
        else if (choice==7)
            sortBooks(b, n);
        else if (choice==8)
            displayBooks(b, n);
        else if (choice==9)
            top3Books(b, n);
        else
            printf("\nInvalid choice!\n");
    }

    free(b);
    return 0;
}

void showBook(Book b)
{
    printf("\n--------------------------------------------\n");
    printf("Book ID       : %d\n", b.id);
    printf("Book Name     : %s\n", b.name);
    printf("Author Name   : %s\n", b.author);
    printf("Category      : %s\n", b.category);
    printf("Price         : %.2f\n", b.price);
    printf("Rating        : %.1f\n", b.rating);
    printf("--------------------------------------------\n");
}

void displayBooks(Book b[], int n)
{
    if (n==0)
    {
        printf("\nNo books available!\n");
        return;
    }

    printf("--------------ALL BOOKS---------------\n");
    printf("%-8s %-25s %-22s %-20s %-10s %-8s\n", "ID", "Book Name", "Author", "Category", "Price", "Rating");

    printf("--------------------------------------------------------------------------------------------------\n");

    for (int i=0;i<n;i++)
    {
       printf("%-8d %-25s %-22s %-20s %-10.2f %-8.1f\n", b[i].id, b[i].name, b[i].author, b[i].category, b[i].price, b[i].rating);
    }

    printf("--------------------------------------------------------------------------------------------------\n");
}

int findBookById(Book b[], int n, int id)
{
    for (int i=0;i<n;i++)
    {
        if (b[i].id==id)
        {
            return i;
        }
    }

    return -1;
}

int compareName(char a[], char b[])
{
    int i=0;

    while (a[i]!='\0'&&b[i]!='\0')
    {
        if (tolower(a[i])!=tolower(b[i]))
        {
            return 0;
        }
        i++;
    }

    if (a[i]=='\0'&&b[i]=='\0')
    {
        return 1;
    }

    return 0;
}

void addBook(Book b[], int *n, int *capacity)
{
    int id;

    if (*n>=*capacity)
    {
        *capacity=*capacity*2;
        b=(Book *)realloc(b,*capacity*sizeof(Book));
        if (b==NULL)
        {
            printf("\nMemory allocation failed! Cannot add more books.\n");
            return;
        }
    }

    printf("-------------------ADD BOOK------------------\n");
    do{
    printf("Enter Book ID: ");
    scanf("%d", &id);

    if (findBookById(b,*n,id)!=-1) 
        printf("\nBook ID already exists!\n\n");
    } while (findBookById(b,*n,id)!=-1);
    
    b[*n].id=id;

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[*n].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[*n].author);

    printf("Enter Category: ");
    scanf(" %[^\n]", b[*n].category);

    printf("Enter Price: ");
	scanf("%f", &b[*n].price);
	while(b[*n].price<=0)
	{
	    printf("Price should be greater than 0.\n");
	    printf("Enter Price again: ");
	    scanf("%f",&b[*n].price);
	}
	
	printf("Enter Rating: ");
	scanf("%f",&b[*n].rating);
	while(b[*n].rating<0||b[*n].rating>5)
	{
	    printf("Rating should be greater than 0 and less than 5.\n");
	    printf("Enter Rating again: ");
	    scanf("%f",&b[*n].rating);
	}

    (*n)++;

    printf("\nBook added successfully!\n");
}


void removeBook(Book b[], int *n)
{
    int id;
    int pos;
    int i;
    printf("----------------REMOVE BOOK------------------\n");

    if (*n==0)
    {
        printf("\nNo books available!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &id);

    pos=findBookById(b, *n, id);

    if (pos==-1)
    {
        printf("\nBook not found!\n");
        return;
    }

    printf("\nBook to be removed:");
    showBook(b[pos]);

    for (i=pos;i<*n-1;i++)
    {
        b[i]=b[i+1];
    }
    (*n)--;

    printf("\nBook removed successfully!\n");
}

void searchBook(Book b[], int n)
{
    int choice;
    printf("-------------------SEARCH BOOK------------------\n");
    printf("Search Book By:\n");
    printf("1. Book ID\n");
    printf("2. Book Name\n");
    printf("0. Back\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice==1)
        searchById(b,n);
    else if (choice==2)
        searchByName(b,n);
    else if (choice==0)
        return;
    else
        printf("\nInvalid choice!\n");
}

void searchById(Book b[], int n)
{
    int id;
    int pos;
    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    pos=findBookById(b,n,id);

    if (pos==-1)
        printf("\nBook not found!\n");
    else
    {
        printf("\nBook found:\n");
        showBook(b[pos]);
    }
}

void searchByName(Book b[], int n)
{
    char name[100];
    int i;

    printf("\nEnter Book Name: ");
    scanf(" %[^\n]", name);

    for (i=0;i<n;i++)
    {
        if (compareName(b[i].name, name))
        {
            printf("\nBook found:\n");
            showBook(b[i]);
            return;
        }
    }

    printf("\nBook not found!\n");
}

void showAuthorBooks(Book b[], int n)
{
    char name[100];
    int i;
    int found = 0;
    printf("-----------------AUTHOR'S BOOKS-----------------\n");
    printf("Enter Author Name: ");
    scanf(" %[^\n]", name);

    for (i=0;i<n;i++)
    {
        if (compareName(b[i].author, name))
        {
            showBook(b[i]);
            found=1;
        }
    }

    if (found==0)
        printf("\nNo books found for this author.\n");
}

void showCategoryBooks(Book b[], int n)
{
    char name[50];
    int i;
    int found = 0;
    printf("-------------------CATEGORY'S BOOKS-------------------\n");
    printf("Enter Category: ");
    scanf(" %[^\n]", name);

    for (i=0;i<n;i++)
    {
        if (compareName(b[i].category, name))
        {
            showBook(b[i]);
            found=1;
        }
    }

    if (found==0)
    {
        printf("\nNo books found in this category.\n");
    }
}

void updateBook(Book b[], int n)
{
    int id;
    int pos;
    int choice;
    printf("--------------------UPDATE BOOK--------------------\n");
    printf("Enter Book ID: ");
    scanf("%d", &id);

    pos=findBookById(b, n, id);

    if (pos==-1)
    {
        printf("\nBook not found!\n");
        return;
    }

    printf("\nCurrent Book Details:");
    showBook(b[pos]);

    printf("\nWhat do you want to update?\n");
    printf("1. Price\n");
    printf("2. Rating\n");
    printf("3. Both Price and Rating\n");
    printf("0. Back\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice==1)
    {
        printf("\nEnter New Price: ");
        scanf("%f", &b[pos].price);
        printf("\nPrice updated successfully!\n");
    }
    else if (choice==2)
    {
        printf("\nEnter New Rating: ");
        scanf("%f", &b[pos].rating);
        printf("\nRating updated successfully!\n");
    }

    else if (choice==3)
    {
        printf("\nEnter New Price: ");
        scanf("%f", &b[pos].price);
        printf("Enter New Rating: ");
        scanf("%f", &b[pos].rating);
        printf("\nPrice and Rating updated successfully!\n");
    }
    else if (choice==0)
        return;

    else
    {
        printf("\nInvalid choice!\n");
        return;
    }

    printf("\nUpdated Book Details:");
    showBook(b[pos]);
}

void sortBooks(Book b[], int n)
{
    int type;
    int order;
    Book temp;
    printf("---------------SORT BOOKS---------------\n");
    printf("1. Price\n");
    printf("2. Rating\n");
    printf("0. Back\n");
    printf("Enter your choice: ");
    scanf("%d", &type);

    if (type==0)
        return;

    if (type!=1&&type!=2)
    {
        printf("\nInvalid choice!\n");
        return;
    }

    printf("\n1. Highest to Lowest\n");
    printf("2. Lowest to Highest\n");
    printf("0. Back\n");

    printf("Enter your choice: ");
    scanf("%d", &order);

    if (order==0)
    {
        return;
    }

    if (order!=1&&order!=2)
    {
        printf("\nInvalid choice!\n");
        return;
    }

    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (type==1)
            {
                if (order==1)
                {
                    if (b[i].price<b[j].price)
                    {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }

                else
                {
                    if (b[i].price>b[j].price)
                    {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }
            }

            else
            {
                if (order==1)
                {
                    if (b[i].rating<b[j].rating)
                    {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }

                else
                {
                    if (b[i].rating>b[j].rating)
                    {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }
            }
        }
    }

    if (type==1 && order==1)
        printf("\nBooks sorted by Price: Highest to Lowest\n");
    else if (type==1 && order==2)
        printf("\nBooks sorted by Price: Lowest to Highest\n");
    else if (type==2 && order==1)
        printf("\nBooks sorted by Rating: Highest to Lowest\n");
    else
        printf("\nBooks sorted by Rating: Lowest to Highest\n");
    displayBooks(b, n);
}

void top3Books(Book b[], int n)
{
    int type;
    int i;
    int j;
    int limit;
    Book temp;
    printf("-----------------TOP 3 BOOKS-------------------\n");
    printf("1. Price\n");
    printf("2. Rating\n");
    printf("0. Back\n");

    printf("Enter your choice: ");
    scanf("%d", &type);

    if (type==0)
    {
        return;
    }

    if (type!=1 && type!=2)
    {
        printf("\nInvalid choice!\n");
        return;
    }

    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (type==1)
            {
                if (b[i].price<b[j].price)
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }

            else
            {
                if (b[i].rating<b[j].rating)
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
    }

    if (type==1)
        printf("--------------TOP 3 BY PRICE----------------\n");
    else
        printf("--------------TOP 3 BY RATING---------------\n");

    limit=n;

    if (limit>3)
    {
        limit=3;
    }

    for (i=0;i<limit;i++)
    {
        showBook(b[i]);
    }
}