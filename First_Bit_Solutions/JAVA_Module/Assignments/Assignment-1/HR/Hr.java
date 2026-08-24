class Hr{
	int id;
	String Name;
	double Salary;
	double Commission;
} //Class Hr ends here

class TestHr
	{
		public static void main(String[] args)
		{
			System.out.println("This is TestHr Class");
			
			Hr H1;
			H1= new Hr();
			System.out.println(H1);
		}
	}