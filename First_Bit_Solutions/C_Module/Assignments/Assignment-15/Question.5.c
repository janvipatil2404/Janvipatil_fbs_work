#include <stdio.h>
#include <string.h>

typedef struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
} Movie;

void displayMovies(Movie m[], int size)
{
    int i;

    printf("\n----- MOVIE DETAILS -----\n");

    for(i = 0; i < size; i++)
    {
        printf("\nMovie %d\n", i + 1);
        printf("Title    : %s\n", m[i].title);
        printf("Director : %s\n", m[i].director);
        printf("Year     : %d\n", m[i].year);
        printf("Genre    : %s\n", m[i].genre);
    }
}

void addMovie(Movie m[], int *size)
{
    printf("\nEnter Movie Details\n");

    printf("Enter Title: ");
    scanf("%s", m[*size].title);

    printf("Enter Director: ");
    scanf("%s", m[*size].director);

    printf("Enter Release Year: ");
    scanf("%d", &m[*size].year);

    printf("Enter Genre: ");
    scanf("%s", m[*size].genre);

    (*size)++;

    printf("\nMovie Added Successfully!\n");
}

void searchMovie(Movie m[], int size)
{
    char title[50];
    int i;
    int found = 0;

    printf("\nEnter Movie Title to Search: ");
    scanf("%s", title);

    for(i = 0; i < size; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie Found!\n");
            printf("Title    : %s\n", m[i].title);
            printf("Director : %s\n", m[i].director);
            printf("Year     : %d\n", m[i].year);
            printf("Genre    : %s\n", m[i].genre);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nMovie Not Found!\n");
    }
}

void updateMovie(Movie m[], int size)
{
    char title[50];
    int i;
    int found = 0;

    printf("\nEnter Movie Title to Update: ");
    scanf("%s", title);

    for(i = 0; i < size; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("\nEnter New Director: ");
            scanf("%s", m[i].director);

            printf("Enter New Release Year: ");
            scanf("%d", &m[i].year);

            printf("Enter New Genre: ");
            scanf("%s", m[i].genre);

            printf("\nMovie Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nMovie Not Found!\n");
    }
}

void main()
{
    Movie m[10] =
    {
        {"Avatar", "James", 2009, "SciFi"},
        {"Titanic", "Cameron", 1997, "Romance"},
        {"Inception", "Nolan", 2010, "Thriller"}
    };

    int size = 3;
    int choice = -1;

    while(choice != 0)
    {
        printf("\n\n===== MOVIE DATABASE =====\n");
        printf("1. Display Movies\n");
        printf("2. Add Movie\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayMovies(m, size);
                break;

            case 2:
                if(size < 10)
                {
                    addMovie(m, &size);
                }
                else
                {
                    printf("\nDatabase is Full!\n");
                }
                break;

            case 3:
                searchMovie(m, size);
                break;

            case 4:
                updateMovie(m, size);
                break;

            case 0:
                printf("\nProgram Ended.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
}