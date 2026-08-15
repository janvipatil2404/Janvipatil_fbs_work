void main()
{
    char str1[20], str2[00];

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    if(strncmp(str1, str2, 3) == 0)
        printf("Strings are similar.");
    else
        printf("Strings are not similar.");
}