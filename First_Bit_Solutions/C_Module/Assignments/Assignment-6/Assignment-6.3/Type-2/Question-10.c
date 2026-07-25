#include<stdio.h>

int palindrome();

void main()
{
    int res;

    res=palindrome();

    if(res==0)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}

int palindrome()
{
    int n,o,r;
    int rev=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    o=n;

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    if(o==rev)
        return 0;
    else
        return 1;
}