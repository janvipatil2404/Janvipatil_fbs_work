void main()
{
    char str1[10], str2[10];

    printf("Enter a string: ");
    scanf("%s",str1);

    strcpy(str2, str1);

    printf("Copy of string is = %s", str2);
}