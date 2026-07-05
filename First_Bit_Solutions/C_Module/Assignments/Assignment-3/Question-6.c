void main()
{
    int n=28,i=1;
    int sum=0;

    while(i<n)
        {
        if(n%i==0)
        {
            sum=sum+i;
        }
        	i++;
        }

        if(n==sum)
            printf("%d is Perfect number",n);
        else
            printf("%d is Not Perfect number", n);
    
}