void main()
{
	int basic=100000;
	int da,ta,hra,total;
	
	if(basic<=5000)
	{
		da=basic/100*10;
	    ta=basic/100*20;
	    hra=basic/100*25;
	    total=basic+da+ta+hra;
		printf("da=%d",da);
		printf("\nta=%d",ta);
		printf("\nhra=%d",hra);
		printf("\nTotal salary of employee is %d", total);
	}
	else
	{
	    da=basic/100*15;
	    ta=basic/100*25;
	    hra=basic/100*30;
	    total=basic+da+ta+hra;
	    printf("da=%d",da);
		printf("\nta=%d",ta);
		printf("\nhra=%d",hra);
		printf("\nTotal salary of employee is %d", total);	
	}
	
}