int evenodd();
void main()
{
	int result;
	result=evenodd();
	if(result==0)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
}
int evenodd()
{
	int a=7;
	if(a%2==0)
		return 0;
	else
		return 1;
	
}