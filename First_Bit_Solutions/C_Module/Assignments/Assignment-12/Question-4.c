#include <stdio.h>

int main()
{
    char str[50];
    int i;
    char temp;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
    }

    temp = str[0];
    str[0] = str[i - 1];
    str[i - 1] = temp;

    printf("New string = %s", str);

    return 0;
}