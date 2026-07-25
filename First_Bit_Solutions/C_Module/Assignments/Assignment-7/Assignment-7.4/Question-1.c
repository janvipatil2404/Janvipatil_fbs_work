#include<stdio.h>

void armstrong(int*);
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    armstrong(&n);
}
void armstrong(int* n)
{
    int o,count=0;
    int a,sum=0;
    o=*n;
    while(*n>0)
    {
        count++;
        *n=*n/10;
    }
    *n=o;
    while(*n>0)
    {
        a=*n%10;
        int res=1;
        for(int i=1;i<=count;i++)
        {
            res=res*a;
        }
        sum=sum+res;
        *n=*n/10;
    }
    if(sum==o)
        printf("%d is Armstrong Number",o);
    else
        printf("%d is Not Armstrong Number",o);
}