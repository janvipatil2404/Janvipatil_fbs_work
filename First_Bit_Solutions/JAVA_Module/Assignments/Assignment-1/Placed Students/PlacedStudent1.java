class PlacedStudents1 {
    String frn;
    String StudentName;
    double DistanceCovered;
    String CompanyName;
    String Designation;
} // Class PlacedStudents1 ends here

class TestPlacedStudents1 {
    public static void main(String[] args) 
	{
       	 	System.out.println("This is TestPlacedStudents1 Class");

        	PlacedStudents1 P1;
        	P1 = new PlacedStudents1();

        	P1.frn = "FRN101";
        	P1.StudentName = "Janvi";
        	P1.DistanceCovered = 25.5;
        	P1.CompanyName = "TCS";
        	P1.Designation = "Software Developer";

        	System.out.println("FRN is: " + P1.frn);
        	System.out.println("Student Name is: " + P1.StudentName);
        	System.out.println("Distance Covered is: " + P1.DistanceCovered);
        	System.out.println("Company Name is: " + P1.CompanyName);
        	System.out.println("Designation is: " + P1.Designation);
   	 }
}