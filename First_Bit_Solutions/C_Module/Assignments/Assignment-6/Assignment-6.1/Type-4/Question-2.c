int palindrome(int);
void main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	int ispalindrome;
	ispalindrome=palindrome(a);	
	if(ispalindrome==0)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
int palindrome(int a)
{
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