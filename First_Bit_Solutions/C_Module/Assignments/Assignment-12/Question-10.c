#include <stdio.h>

int main()
{
    char str[50];
    int i, j, flag = 1;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
	}

    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

    return 0;
}