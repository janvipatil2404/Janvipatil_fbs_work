#include<stdio.h>

int vowel();

void main()
{
    int res;

    res = vowel();

    if(res==0)
        printf("The given character is Vowel");
    else
        printf("The given character is Consonant");
}

int vowel()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return 0;
    else
        return 1;
}