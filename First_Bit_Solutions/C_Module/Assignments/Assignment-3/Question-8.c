void main()
{
    int n=145,org=n,p,i=1;
    int sum=0,factorial=1;

   while(n > 0)
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
            printf("%d is strong number",org);
        else
            printf("%d is Not strong number", org);
    
}