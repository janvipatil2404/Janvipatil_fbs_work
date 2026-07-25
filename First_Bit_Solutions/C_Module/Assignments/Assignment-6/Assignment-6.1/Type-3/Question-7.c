#include<stdio.h>

void salary(int);

void main()
{
    int basic;

    printf("Enter basic salary: ");
    scanf("%d", &basic);

    salary(basic);
}

void salary(int basic)
{
    int da, ta, hra, total;

    if(basic<=5000)
    {
        da=basic*10/100;
        ta=basic*20/100;
        hra=basic*25/100;
    }
    else
    {
        da=basic*15/100;
        ta=basic*25/100;
        hra=basic*30/100;
    }

    total=basic+da+ta+hra;

    printf("DA = %d", da);
    printf("\nTA = %d", ta);
    printf("\nHRA = %d", hra);
    printf("\nTotal Salary = %d", total);
}