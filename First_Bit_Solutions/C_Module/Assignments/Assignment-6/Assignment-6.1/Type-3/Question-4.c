#include<stdio.h>

void vowel(char);

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    vowel(ch);
}

void vowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("The given character is Vowel");
    else
        printf("The given character is Consonant");
}