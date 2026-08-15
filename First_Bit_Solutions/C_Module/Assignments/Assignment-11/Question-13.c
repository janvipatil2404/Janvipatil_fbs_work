#include <stdio.h>
int mystrncmp(char str1[], char str2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
	        if (str1[i] == '\0')
	            break;
    }

    return 0;
}

int main()
{
    char str1[30], str2[30];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter n: ");
    scanf("%d", &n);

    if (mystrncmp(str1, str2, n) == 0)
        printf("First %d characters are same", n);
    else
        printf("Characters are different");

    return 0;
}