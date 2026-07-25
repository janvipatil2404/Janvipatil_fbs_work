#include<stdio.h>

void palindrome(int*);
void main()
{
    int a=454;
    palindrome(&a);
}
void palindrome(int* a)
{
    int x,y,z,t;

    x=*a%10;
    t=*a/10;
    y=t%10;
    z=t/10;

    if(x==z)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}