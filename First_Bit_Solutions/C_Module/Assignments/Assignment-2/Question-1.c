void main()
{
	int a=10,b=20,result;
	char o='+';
	
	if(o=='*')
 	{
		result=a*b;
		printf("Answer using '%c' operator is a %c b = %d",o,o,result);
	}
	else if(o=='/')
	{
		result=a/b;
		printf("Answer using '%c' operator is a %c b = %d",o,o,result);
	}
	else if(o=='%')
	{
		result=a%b;
		printf("Answer using '%c' operator is a %c b = %d",o,o,result);
	}
	else if(o=='+')
	{
		result=a+b;
		printf("Answer using '%c' operator is a %c b = %d",o,o,result);
	}
	else if(o=='-')
	{
		result=a-b;
		printf("Answer using '%c' operator is a %c b = %d",o,o,result);
	}
	else
	{
		printf("Use Correct operator");
	}	
}