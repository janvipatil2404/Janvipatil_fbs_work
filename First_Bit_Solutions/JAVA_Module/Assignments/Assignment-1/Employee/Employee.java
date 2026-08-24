class Employee{
	int id;
	String Name;
	double Salary;
} //Class Employee ends here

class TestEmployee
	{
		public static void main(String[] args)
		{
			System.out.println("This is TestEmployee Class");
			
			Employee E1;
			E1= new Employee();
			System.out.println(E1);
		}
	}