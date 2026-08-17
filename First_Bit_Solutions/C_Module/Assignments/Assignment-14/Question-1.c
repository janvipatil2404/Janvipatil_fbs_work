#include <stdio.h>
#include <string.h>
typedef struct student
{
    int rollNo;
    char name[20];
    float marks;
} student;

void storestudent(student* sarr, int size);
void displaystudent(student* sarr, int size);

void main()
{
    student arr[2];

    printf("Enter student details:\n");
    storestudent(arr, 2);

    printf("\nStudent details:\n");
    displaystudent(arr, 2);
}

void storestudent(student* sarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &sarr[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", sarr[i].name);

        printf("Enter Marks: ");
        scanf("%f", &sarr[i].marks);
    }
}

void displaystudent(student* sarr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\n%d %s %.2f",sarr[i].rollNo,sarr[i].name,sarr[i].marks);
    }
}