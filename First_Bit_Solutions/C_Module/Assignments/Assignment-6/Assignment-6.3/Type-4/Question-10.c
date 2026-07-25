#include<stdio.h>

int palindrome(int);

void main()
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d",&n);

    res=palindrome(n);

    if(res==0)
        printf("%d is Palindrome Number",n);
    else
        printf("%d is Not Palindrome Number",n);
}

int palindrome(int n)
{
    int o,r;
    int rev=0;

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