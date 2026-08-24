class PlacedStudents{
	String frn;
	String StudentName;
	double DistanceCovered;
	String CompanyName;
	String Designation;
} //Class PlacedStudents ends here

class TestPlacedStudents
	{
		public static void main(String[] args)
		{
			System.out.println("This is TestPlacedStudents Class");
			
			PlacedStudents P1;
			P1= new PlacedStudents();
			System.out.println(P1);
		}
	}