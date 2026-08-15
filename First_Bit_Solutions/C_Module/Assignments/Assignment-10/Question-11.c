void main()
{
    char str[]="Apple,Banana,Mango";

    char *p;

    p=strtok(str,",");

    while(p!='\0')
    {
        printf("%s\n",p);
        p=strtok('\0',",");
    }
}