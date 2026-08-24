class Student1{
	String frn;
	String StudentName;
	double DistanceCovered;
} //class student1 ends here

class TestStudent1
	{
		public static void main(String[] args)
		{
			System.out.println("This is Student1 Class");
			
			Student1 S1;
			S1=new Student1(); 
			S1.frn = "FRN101";
           		S1.StudentName = "Janvi";
        		S1.DistanceCovered = 25.5;

       	 		System.out.println("FRN is: " + S1.frn);
        		System.out.println("Student Name is: " + S1.StudentName);
        		System.out.println("Distance Covered is: " + S1.DistanceCovered);
		}
	}