#include<stdio.h>
void main()
{
    char str[20], ch;

    printf("Enter string: ");
    scanf("%s",str);
    fflush(stdin);
    printf("Enter character: ");
    scanf("%c",&ch);
    if(strchr(str, ch)!='\0')
    	printf("Character found");
    else
    	printf("Character not found");
}