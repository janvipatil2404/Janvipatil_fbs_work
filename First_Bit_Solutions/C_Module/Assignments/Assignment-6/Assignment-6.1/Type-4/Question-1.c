int evenodd(int);
void main()
{
	int a,result;
	printf("Enter the number: ");
	scanf("%d", &a);
	result=evenodd(a);
	if(result==0)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
}
int evenodd(int a)
{

	if(a%2==0)
		return 0;
	else
		return 1;
}