class SalesManager{
	int id;
	String Name;
	double Salary;
	double incentive;
        double target;
} //Class SalesManager ends here

class TestSalesManager
	{
		public static void main(String[] args)
		{
			System.out.println("This is TestSalesManager Class");
			
			SalesManager SM1;
			SM1= new SalesManager();
			System.out.println(SM1);
		}
	}