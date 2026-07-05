void main()
{
    int n=11;
    int i=2;

    if(n<=1)
    {
        printf("%d is Not Prime", n);
    }
    else
    {
        while(i<n && n%i!=0)
        {
            i++;
        }

        if(i==n)
            printf("%d is Prime", n);
        else
            printf("%d is Not Prime", n);
    }
}