class Date1 {
    int day;
    int month;
    int year;
    String dow;
}

class TestDate1 {
    public static void main(String[] args) {
        System.out.println("Hello Java!!!!");

        Date1 d1;        // Reference variable
        d1 = new Date1(); // Object creation
	d1.day=24;
	d1.month=04;
	d1.year=2004;
	d1.dow="Saturday";
	System.out.println("Day is: "+d1.day);
	System.out.println("Month is: "+d1.month);
	System.out.println("Year is: "+d1.year);
	System.out.println("Day of week is: "+d1.dow);
    }
}