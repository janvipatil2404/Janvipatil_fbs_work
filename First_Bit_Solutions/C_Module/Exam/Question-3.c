#include <stdio.h>
typedef struct song
{
    int id;
    char title[50];
    char artist[50];
    float duration;
} song;

void addSong(song *s, int *n)
{
    printf("\nEnter Song ID: ");
    scanf("%d", &s[*n].id);

    printf("Enter Song Title: ");
    scanf(" %[^\n]", s[*n].title);

    printf("Enter Artist Name: ");
    scanf(" %[^\n]", s[*n].artist);

    printf("Enter Duration in minutes: ");
    scanf("%f", &s[*n].duration);

    (*n)++;

    printf("\nSong added successfully.\n");
}

void displaySongs(song *s, int n)
{
    int i;

    if(n==0)
    {
        printf("\nNo songs available.\n");
        return;
    }

    printf("\n--- Song Library ---\n");

    for(i=0;i<n;i++)
    {
        printf("\nSong %d\n", i + 1);
        printf("ID : %d\n", s[i].id);
        printf("Title : %s\n", s[i].title);
        printf("Artist : %s\n", s[i].artist);
        printf("Duration : %.2f minutes\n", s[i].duration);
    }
}

void main()
{
    song s[100];
    int n = 0;
    int choice;

    while(1)
    {
        printf("\n\n--- Music Library ---\n");
        printf("1. Add Song\n");
        printf("2. Display Songs\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice==1)
        {
            if(n<100)
                addSong(s, &n);
            else
                printf("\nLibrary is full.\n");
        }
        else if(choice==2)
            displaySongs(s, n);
        else if(choice==0)
        {
            printf("\nProgram ended.\n");
            break;
        }
        else
            printf("\nInvalid choice.\n");
    }
}