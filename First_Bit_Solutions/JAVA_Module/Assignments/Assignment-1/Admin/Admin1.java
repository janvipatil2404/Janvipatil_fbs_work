class Admin1 {
    int id;
    String Name;
    double Salary;
    double Allowance;
} // Class Admin1 ends here

class TestAdmin1 {
    public static void main(String[] args) 
	{
        	System.out.println("This is TestAdmin1 Class");

        	Admin1 A1;
        	A1 = new Admin1();

        	A1.id = 101;
        	A1.Name = "Janvi";
        	A1.Salary = 50000.0;
        	A1.Allowance = 5000.0;

        	System.out.println("Admin ID is: " + A1.id);
        	System.out.println("Admin Name is: " + A1.Name);
        	System.out.println("Admin Salary is: " + A1.Salary);
        	System.out.println("Admin Allowance is: " + A1.Allowance);
    	}
}