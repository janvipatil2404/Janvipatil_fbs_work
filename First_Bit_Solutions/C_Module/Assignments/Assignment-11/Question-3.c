int mystrcmp(char* , char*);
void main()
{
	char str[]="Apply";
	char org[]="apply";
	int cmp=mystrcmp(org,str);
	if(cmp==0)
	printf("same");
	else if(cmp==1)
		printf("%s is greater",str);
	else
		printf("%s is greater",org);

}
int mystrcmp(char* org, char* str)
{
	int i=0;
	while(str[i]!='\0' && org[i]==str[i])
		i++;	
	
	if(org[i]==str[i])
		return 0;
	else if(org[i]>str[i])
		return 1;
	else
		return -1;
}
