#include <stdio.h>
char* mystrchr(char str[], char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return &str[i];
        i++;
    }

    return NULL;
}

int main()
{
    char str[30], ch;
    char *ptr;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    ptr = mystrchr(str, ch);

	    if (ptr != NULL)
	        printf("Character found = %s", ptr);
	    else
	        printf("Character not found");

    return 0;
}