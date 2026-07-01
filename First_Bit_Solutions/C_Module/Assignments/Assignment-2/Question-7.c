void main()
{
	int age=23;
	if(age>=60)
		printf("Person is Senior");
			else if(age<60 && age>=20)
			printf("Person is Adult");
				else if(age<20 && age>=12)
				printf("Person is Teenager");
					else
					printf("Person is Child");
}