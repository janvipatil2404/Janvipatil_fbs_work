#include <stdio.h>

int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    char ch1, ch2;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if (ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

	        if (ch2 >= 'A' && ch2 <= 'Z')
	            ch2 = ch2 + 32;
	
		        if (ch1 != ch2)
		            return ch1 - ch2;

        i++;
    }

    return 0;
}

int main()
{
    char str1[20], str2[20];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

	    if (mystrcasecmp(str1, str2) == 0)
	        printf("Strings are equal");
	    else
	        printf("Strings are not equal");

    return 0;
}