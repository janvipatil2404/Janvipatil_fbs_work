class Hr1 {
    int id;
    String Name;
    double Salary;
    double Commission;
} // Class Hr1 ends here

class TestHr1 {
    public static void main(String[] args)
 	{
        	System.out.println("This is TestHr1 Class");

        	Hr1 H1;
        	H1 = new Hr1();

        	H1.id = 101;
        	H1.Name = "Janvi";
        	H1.Salary = 50000.0;
        	H1.Commission = 5000.0;

        	System.out.println("HR ID is: " + H1.id);
        	System.out.println("HR Name is: " + H1.Name);
        	System.out.println("HR Salary is: " + H1.Salary);
        	System.out.println("HR Commission is: " + H1.Commission);
    	}
}