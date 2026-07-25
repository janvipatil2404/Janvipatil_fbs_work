#include<stdio.h>

void palindrome(int*);
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palindrome(&n);
}

void palindrome(int* n)
{
    int o,r;
    int rev=0;
    o=*n;
    while(*n>0)
    {
        r=*n%10;
        rev=rev*10+r;
        *n=*n/10;
    }
    if(o==rev)
        printf("%d is Palindrome Number",o);
    else
        printf("%d is Not Palindrome Number",o);
}