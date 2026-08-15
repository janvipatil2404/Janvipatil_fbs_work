void main()
{
    char str1[20], str2[20];

    printf("Enter a string: ");
    scanf("%s",str1);

    strncpy(str2, str1, 8);
    str2[8]='\0';

    printf("%s", str2);
}