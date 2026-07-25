#include<stdio.h>
void check(char*);
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);
    check(&ch);
}
void check(char* ch)
{
    if(*ch>='A' && *ch<='Z')
        printf("The given character is Uppercase");
    else
        printf("The given character is Lowercase");
}