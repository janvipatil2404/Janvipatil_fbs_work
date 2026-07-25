#include<stdio.h>

int check();

void main()
{
    int res;

    res = check();

    if(res==0)
        printf("The given character is Uppercase");
    else
        printf("The given character is Lowercase");
}

int check()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch>='A' && ch<='Z')
        return 0;
    else
        return 1;
}