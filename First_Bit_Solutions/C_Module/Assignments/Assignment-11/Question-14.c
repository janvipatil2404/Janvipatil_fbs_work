#include <stdio.h>

char* mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for (i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' &&
               i + j < n &&
               str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

int main()
{
    char str[50], sub[20];
    char *ptr;
    int n;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    printf("Enter n: ");
    scanf("%d", &n);

    ptr = mystrnstr(str, sub, n);

    if (ptr != NULL)
        printf("Substring found = %s", ptr);
    else
        printf("Substring not found");

    return 0;
}