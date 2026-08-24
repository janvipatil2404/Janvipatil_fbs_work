#include<stdio.h>
void main()
{	
    char str[50];
    int count=0;

    printf("Enter your string: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '&&(i==0||str[i-1]==' '))
            count++;
    }
    printf("Number of words = %d", count);
}
