void main()
{
	int i=1,r;
	int n=121,o=n;
	int rev=0;        
	while(n>0)
	{
		r=n%10;
        rev=rev*10+r;
        n=n/10;
	}
	if(o==rev)
		printf("%d is palindrome number",o);
	else
		printf("%d is not palindrome number",o);
		
}                     