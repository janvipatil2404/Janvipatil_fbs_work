#include <stdio.h>

int main()
{
    char str[50];
    int n, i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter index: ");
    scanf("%d", &n);

    for(i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("String after removing character = %s", str);

    return 0;
}