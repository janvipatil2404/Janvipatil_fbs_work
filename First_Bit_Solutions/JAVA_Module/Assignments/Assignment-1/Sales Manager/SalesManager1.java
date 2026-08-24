class SalesManager1 {
    int id;
    String Name;
    double Salary;
    double incentive;
    double target;
} // Class SalesManager1 ends here

class TestSalesManager1 {
    public static void main(String[] args)
	 {
        	System.out.println("This is TestSalesManager1 Class");

        	SalesManager1 SM1;
        	SM1 = new SalesManager1();

        	SM1.id = 101;
        	SM1.Name = "Janvi";
        	SM1.Salary = 50000.0;
        	SM1.incentive = 5000.0;
        	SM1.target = 100000.0;

        	System.out.println("Sales Manager ID is: " + SM1.id);
        	System.out.println("Sales Manager Name is: " + SM1.Name);
        	System.out.println("Sales Manager Salary is: " + SM1.Salary);
        	System.out.println("Sales Manager Incentive is: " + SM1.incentive);
        	System.out.println("Sales Manager Target is: " + SM1.target);
    	}
}