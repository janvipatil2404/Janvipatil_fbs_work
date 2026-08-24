class Admin{
	int id;
	String Name;
	double Salary;
	double Allowance;
} //Class Admin ends here

class TestAdmin
	{
		public static void main(String[] args)
		{
			System.out.println("This is TestAdmin Class");
			
			Admin A1;
			A1= new Admin();
			System.out.println(A1);
		}
	}