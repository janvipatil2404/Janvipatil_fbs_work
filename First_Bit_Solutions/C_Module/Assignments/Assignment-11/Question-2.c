int mystrlen(char str[]);
void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);
    printf("Length = %d", mystrlen(str));
}

int mystrlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}