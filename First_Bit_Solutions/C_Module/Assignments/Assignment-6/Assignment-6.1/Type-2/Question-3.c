int leap();
void main()
{
	int res;
	res=leap();
	if(res==0)
	{
		printf("Given year is Leap year");
	}
	else
	{
		printf("Given year is not a Leap year");
	}
}
int leap()
{
	int a=4000;
	if(a%400==0||a%4==0&&a%100!=0)
		return 0;
	else
		return 1;

}