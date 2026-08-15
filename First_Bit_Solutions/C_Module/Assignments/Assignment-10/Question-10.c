void main()
{
    char str[100], sub[100];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    printf("%s", strstr(str, sub));
}