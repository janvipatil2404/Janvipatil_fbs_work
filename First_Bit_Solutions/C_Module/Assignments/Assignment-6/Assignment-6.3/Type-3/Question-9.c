#include<stdio.h>

void strong(int);

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    strong(n);
}

void strong(int n)
{
    int org,p;
    int sum=0,factorial,i;

    org=n;

    while(n>0)
    {
        p=n%10;
        factorial=1;
        i=1;

        while(i<=p)
        {
            factorial=factorial*i;
            i++;
        }

        sum=sum+factorial;
        n=n/10;
    }

    if(org==sum)
        printf("%d is Strong Number",org);
    else
        printf("%d is Not Strong Number",org);
}