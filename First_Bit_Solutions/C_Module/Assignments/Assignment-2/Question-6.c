void main()
{
	int a=20;
	if(a%3==0 && a%5==0)
		printf("%d is divisible by both 3 and 5",a);
			else if(a%3==0 && a%5!=0)
			printf("%d is divisible by 3 but not by 5",a);
				else if(a%3!=0 && a%5==0)
				printf("%d is divisible by 5 but not by 3",a);
					else
					printf("%d is not divisible by both 3 and 5",a);
}