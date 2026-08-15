#include <stdio.h>

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char ch1, ch2;

    for (i = 0; i < n; i++)
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if (ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;
	
	        if (ch2 >= 'A' && ch2 <= 'Z')
	            ch2 = ch2 + 32;
	
		        if (ch1 != ch2)
		            return ch1 - ch2;
		
			        if (ch1 == '\0')
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

    if (mystrncasecmp(str1, str2, n) == 0)
        printf("First %d characters are same", n);
    else
        printf("Characters are different");

    return 0;
}