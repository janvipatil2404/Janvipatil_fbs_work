void main()
{
    int n=123,org=n,p;
    int sum=0,cube;

    while(n>0)
        {
        	p=n%10;
        	cube=p*p*p;
        	sum=sum+cube;
        	n=n/10;
        }
        printf("sum of cube is %d  so ", sum);

        if(org==sum)
            printf("%d is Armstrong number",org);
        else
            printf("%d is Not Armstrong number", org);
    
}