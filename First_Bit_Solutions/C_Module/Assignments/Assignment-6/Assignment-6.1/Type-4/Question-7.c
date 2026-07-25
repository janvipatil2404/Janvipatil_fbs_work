#include<stdio.h>

int salary(int);

void main()
{
    int basic, total;

    printf("Enter basic salary: ");
    scanf("%d", &basic);

    total=salary(basic);

    printf("Total Salary = %d", total);
}

int salary(int basic)
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

    return total;
}