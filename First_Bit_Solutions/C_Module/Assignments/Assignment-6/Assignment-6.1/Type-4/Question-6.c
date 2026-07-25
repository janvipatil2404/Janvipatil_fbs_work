#include<stdio.h>

int check(char);

void main()
{
    char ch;
    int res;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    res = check(ch);

    if(res==0)
        printf("The given character is Uppercase");
    else
        printf("The given character is Lowercase");
}

int check(char ch)
{
    if(ch>='A' && ch<='Z')
        return 0;
    else
        return 1;
}