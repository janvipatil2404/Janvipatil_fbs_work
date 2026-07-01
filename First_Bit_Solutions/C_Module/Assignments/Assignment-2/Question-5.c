void main()
{
	int p=300,d;
	char st='y';
	if(st=='y'&& p>500)
	{
		d=p-(0.20*p);
		printf("Customer is student and got 20%% discount so his total price is %d",d);
	}
		else if(st=='y' && p<500)
		 	{
			 d=p-(0.10*p);
			 printf("Customer is student and got 10%% discount so his total price is %d",d);
			}
			else if(st=='n' && p>600)
			{
				d=p-(0.15*p);
				printf("Customer is not student and got 15%% discount so his total price is %d",d);
			}
				else
				   	printf("Customer is not student and his total price is %d",p);
}