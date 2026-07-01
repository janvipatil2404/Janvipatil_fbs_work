void main()
{
	int a=454;
	int x,y,z,t;
	x=a%10;
	t=a/10;
	y=t%10;
	z=t/10;
	if(x==z)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
	
}