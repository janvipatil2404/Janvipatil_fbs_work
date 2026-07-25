#include<stdio.h>

void check();

void main()
{
    check();
}

void check()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch>='A' && ch<='Z')
        printf("The given character is Uppercase");
    else
        printf("The given character is Lowercase");
}