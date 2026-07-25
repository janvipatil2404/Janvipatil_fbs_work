#include<stdio.h>

int discount(int,char);

void main()
{
    int p,bill;
    char st;

    printf("Enter total price: ");
    scanf("%d",&p);

    printf("Is customer a student? (y/n): ");
    scanf(" %c",&st);

    bill=discount(p,st);

    printf("Final Price = %d",bill);
}

int discount(int p,char st)
{
    if(st=='y' && p>500)
        return p-(0.20*p);
    else if(st=='y' && p<=500)
        return p-(0.10*p);
    else if(p>600)
        return p-(0.15*p);
    else
        return p;
}