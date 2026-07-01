void main()
{
	int marks=69;
	if(marks>=75)
		printf("Student is passed with Distinction");
		else if(marks<=75 && marks>=65)
			printf("Student is passed with first class");
			else if(marks<=65 && marks>=55)
				printf("Student is passed with Second class");
				else if(marks<=55 && marks>=40)
					printf("Student is passed with pass class");
					else
						printf("Studend is fail");
}