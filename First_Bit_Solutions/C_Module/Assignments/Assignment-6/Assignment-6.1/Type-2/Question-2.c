int palindrome();
void main()
{
	int ispalindrome;
	ispalindrome=palindrome();	
	if(ispalindrome==0)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
int palindrome()
{
	int a=454;
	int x,y,z,t;
	x=a%10;
	t=a/10;
	y=t%10;
	z=t/10;
	if(x==z)
		return 0;
	else
		return 1;
}