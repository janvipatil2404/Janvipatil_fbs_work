#include<stdio.h>

void menu(int,int);

void main()
{
    int c=-1,n;

    while(c!=0)
    {
        printf("\nThis is a Menu Driven Program\n");
        printf("Press 1. To check whether the number is Even or Odd\n");
        printf("Press 2. To check whether the number is Prime or Not\n");
        printf("Press 3. To check whether the number is Palindrome or Not\n");
        printf("Press 4. To check whether the number is Positive, Negative, or Zero\n");
        printf("Press 5. To Reverse a Number\n");
        printf("Press 6. To Find the Sum of Digits\n");
        printf("Press 0. To End the Program\n");

        printf("Enter your choice: ");
        scanf("%d",&c);

        while(c<0 || c>6)
        {
            printf("Invalid Choice\n");
            printf("Enter your choice again: ");
            scanf("%d",&c);
        }

        if(c==0)
        {
            printf("Your program ends here.....");
            break;
        }

        printf("Enter your number: ");
        scanf("%d",&n);

        menu(c,n);
    }
}

void menu(int c,int n)
{
    int i;

    if(c==1)
    {
        if(n%2==0)
            printf("Number is Even");
        else
            printf("Number is Odd");
    }

    else if(c==2)
    {
        if(n<=1)
        {
            printf("Number is Not Prime");
        }
        else
        {
            int flag=0;

            for(i=2;i<n;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
                printf("Number is Prime");
            else
                printf("Number is Not Prime");
        }
    }

    else if(c==3)
    {
        int o=n,r,rev=0;

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

    else if(c==4)
    {
        if(n>0)
            printf("Number is Positive");
        else if(n<0)
            printf("Number is Negative");
        else
            printf("Number is Zero");
    }

    else if(c==5)
    {
        int o=n,rem,rev=0;

        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }

        printf("Reverse of %d is %d",o,rev);
    }

    else if(c==6)
    {
        int o=n,sum=0;

        while(n>0)
        {
            sum=sum+n%10;
            n=n/10;
        }

        printf("Sum of digits of %d is %d",o,sum);
    }
}