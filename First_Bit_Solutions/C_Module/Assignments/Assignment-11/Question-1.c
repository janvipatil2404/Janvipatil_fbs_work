void mystrcpy(char dest[], char src[]);

void main()
{
    char src[100], dest[100];

    printf("Enter string: ");
    scanf("%s", src);

    mystrcpy(dest, src);
    printf("Copy of string: %s", dest);
}
void mystrcpy(char dest[], char src[])
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}