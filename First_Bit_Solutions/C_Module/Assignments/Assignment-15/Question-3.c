#include <stdio.h>

typedef struct Player
{
    char name[30];
    int matches;
    int runs;
    int wickets;
} Player;

void displayPlayers(Player p[], int size)
{
    int i;

    printf("\n--- Player Details ---\n");

    for(i = 0; i < size; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name    : %s\n", p[i].name);
        printf("Matches : %d\n", p[i].matches);
        printf("Runs    : %d\n", p[i].runs);
        printf("Wickets : %d\n", p[i].wickets);
    }
}

void displayMaximumRuns(Player p[], int size)
{
    int i;
    int max = 0;

    for(i = 1; i < size; i++)
    {
        if(p[i].runs > p[max].runs)
        {
            max = i;
        }
    }

    printf("\n--- Player with Maximum Runs ---\n");
    printf("Name    : %s\n", p[max].name);
    printf("Matches : %d\n", p[max].matches);
    printf("Runs    : %d\n", p[max].runs);
    printf("Wickets : %d\n", p[max].wickets);
}

void displayMaximumWickets(Player p[], int size)
{
    int i;
    int max = 0;

    for(i = 1; i < size; i++)
    {
        if(p[i].wickets > p[max].wickets)
        {
            max = i;
        }
    }

    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name    : %s\n", p[max].name);
    printf("Matches : %d\n", p[max].matches);
    printf("Runs    : %d\n", p[max].runs);
    printf("Wickets : %d\n", p[max].wickets);
}

void main()
{
    Player p[10] =
    {
        {"Virat", 250, 13000, 4},
        {"Rohit", 200, 10000, 8},
        {"Dhoni", 350, 12000, 1},
        {"Bumrah", 150, 500, 300},
        {"Jadeja", 180, 3000, 250},
        {"Gill", 100, 5000, 2},
        {"Pant", 120, 4500, 5},
        {"Hardik", 130, 3500, 100},
        {"Rahul", 140, 5500, 3},
        {"Shami", 120, 400, 200}
    };

    int choice = -1;

    while(choice != 0)
    {
        printf("\n===== PLAYER MENU =====\n");
        printf("1. Display All Players\n");
        printf("2. Display Maximum Runs Player\n");
        printf("3. Display Maximum Wickets Player\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayPlayers(p, 10);
                break;

            case 2:
                displayMaximumRuns(p, 10);
                break;

            case 3:
                displayMaximumWickets(p, 10);
                break;

            case 0:
                printf("\nProgram Ended.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
}