#include <stdio.h>

int main()
{
    char str[50];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            str[i] = '$';
        }
    }

    printf("New string = %s", str);

    return 0;
}