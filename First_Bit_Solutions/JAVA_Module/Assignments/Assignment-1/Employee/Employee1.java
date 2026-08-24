class Employee1 {
    int id;
    String Name;
    double Salary;
} // Class Employee1 ends here

class TestEmployee1 {
    public static void main(String[] args) 
	{
        	System.out.println("This is TestEmployee1 Class");

        	Employee1 E1;
        	E1 = new Employee1();

        	E1.id = 101;
        	E1.Name = "Janvi";
        	E1.Salary = 50000.0;

        	System.out.println("Employee ID is: " + E1.id);
        	System.out.println("Employee Name is: " + E1.Name);
        	System.out.println("Employee Salary is: " + E1.Salary);
    	}
}