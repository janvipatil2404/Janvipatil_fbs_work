#include<stdio.h>

void palindrome();

void main()
{
    palindrome();
}

void palindrome()
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
        printf("%d is Palindrome Number",o);
    else
        printf("%d is Not Palindrome Number",o);
}