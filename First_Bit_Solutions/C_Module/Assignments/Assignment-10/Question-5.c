void main()
{
    char str1[20], str2[20];

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    strncat(str1, str2, 2);
    printf("%s", str1);
}