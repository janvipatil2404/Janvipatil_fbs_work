class Date {
    int day;
    int month;
    int year;
    String dom;
}

class TestDate {
    public static void main(String[] args) {
        System.out.println("Hello Java!!!!");

        Date d1;        // Reference variable
        d1 = new Date(); // Object creation

        System.out.println(d1);
    }
}