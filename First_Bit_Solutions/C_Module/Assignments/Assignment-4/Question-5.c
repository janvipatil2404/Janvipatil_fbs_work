void main()
{
	int c,n,i;
	while(c!=0)
	{	
	printf("\nThis is a menu driven program\n"
       "Press 1. To check whether the number is even or odd\n"
       "Press 2. To check whether the number is prime or not\n"
       "Press 3. To check whether the number is palindrome or not\n"
       "Press 4. To check whether the number is positive, negative, or zero\n"
       "Press 5. To reverse a number\n"
       "Press 6. To find the sum of digits\n"
	   "Press 0. To End the program\n");
	printf("Enter your choice: ");
    scanf("%d", &c);
	while(c<0||c>6)
	{
    	printf("Invalid Choice\n");
    	printf("Enter your choice again: ");
    	scanf("%d", &c);
	}
	if(c==0)
	{
		printf("Your program ends here.....");
		break;
	}


	printf("Enter your number: ");
    scanf("%d", &n);
    {
    //press-1
    if(c==1)
    {
    	if(n%2==0)
    		printf("Number is Even");
    	else
    		printf("Number is Odd");
	}
	//press-2
	else if(c==2)
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
				printf("Number is prime");
			else
				printf("Number is not prime");
			
	}
	//press-3
	else if(c==3)
	{
		int o=n,r;
		for(i=0;n>0;n=n/10)
	{
		r=n%10;
        i=i*10+r;
	}
	if(o==i)
		printf("%d is palindrome number",o);
	else
		printf("%d is not palindrome number",o);
	}
	//press-4
	else if(c==4)
	{
		if(n>0)
			printf("Number is positive");
		else if(n<0)
			printf("Number is negative");
		else
			printf("Number is zero");
	}
	//press-5
	else if(c==5)
	{
		int rem,o=n;
		for(i=0;n>0;n=n/10)
		{
			rem=n%10;
			i=i*10+rem;		
		}
		printf("Reverse of %d is %d",o,i);
	}
	//press-6
	else if(c==6)
	{
		int sum,i=0,o=n;
		for(sum=0;n>0;n=n/10)
		{
			i=n%10;
			sum=sum+i;		
		}
		printf("sum of digit of %d is %d",o,sum);
	}
	}
	}
}