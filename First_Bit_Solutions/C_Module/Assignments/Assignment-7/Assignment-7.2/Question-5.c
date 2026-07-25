#include<stdio.h>

void discount(int*,char*);
void main()
{
    int p;
    char st;
    printf("Enter total price: ");
    scanf("%d",&p);
    printf("Is customer a student? (y/n): ");
    scanf(" %c",&st);
    discount(&p,&st);
}

void discount(int* p,char* st)
{
    int d;
    if(*st=='y' && *p>500)
    {
        d=*p-(0.20*(*p));
        printf("Customer is student and got 20%% discount so total price is %d",d);
    }
    else if(*st=='y' && *p<=500)
    {
        d=*p-(0.10*(*p));
        printf("Customer is student and got 10%% discount so total price is %d",d);
    }
    else if(*p>600)
    {
        d=*p-(0.15*(*p));
        printf("Customer is not student and got 15%% discount so total price is %d",d);
    }
    else
        printf("Customer is not student and total price is %d",*p);
    
}