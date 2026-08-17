#include <stdio.h>

typedef struct Time
{
    int hrs;
    int min;
    int sec;
} Time;

void acceptTime(Time *t)
{
    printf("Enter hours: ");
    scanf("%d", &t->hrs);

    printf("Enter minutes: ");
    scanf("%d", &t->min);

    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}

void displayTime(Time t)
{
    printf("%d hrs %d min %d sec\n", t.hrs, t.min, t.sec);
}

Time addTime(Time t1, Time t2)
{
    Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;

    if(t3.sec >= 60)
    {
        t3.sec = t3.sec - 60;
        t3.min++;
    }

    if(t3.min >= 60)
    {
        t3.min = t3.min - 60;
        t3.hrs++;
    }

    return t3;
}

int convertToSec(Time t)
{
    int total;

    total = t.hrs * 3600 + t.min * 60 + t.sec;

    return total;
}

void main()
{
    Time t1, t2, t3;

    printf("Enter first time:\n");
    acceptTime(&t1);

    printf("\nEnter second time:\n");
    acceptTime(&t2);

    printf("\nFirst Time: ");
    displayTime(t1);

    printf("Second Time: ");
    displayTime(t2);

    t3 = addTime(t1, t2);

    printf("\nAddition of Time: ");
    displayTime(t3);

    printf("\nFirst Time in seconds = %d\n", convertToSec(t1));
    printf("Second Time in seconds = %d\n", convertToSec(t2));
    printf("Added Time in seconds = %d\n", convertToSec(t3));
}