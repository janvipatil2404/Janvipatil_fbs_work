class MusicInstrument1 {
    int instrumentId;
    String instrumentName;
    String Category;
    double price;
} //Class MusicInstrument1 ends here

class TestMusicInstrument1 {
    public static void main(String[] args) 
	{
        	System.out.println("This is TestMusicInstrument1 Class");

        	MusicInstrument1 MI1;
        	MI1 = new MusicInstrument1();

        	MI1.instrumentId = 101;
        	MI1.instrumentName = "Guitar";
        	MI1.Category = "String";
        	MI1.price = 15000.0;

        	System.out.println("Instrument ID is: " + MI1.instrumentId);
        	System.out.println("Instrument Name is: " + MI1.instrumentName);
        	System.out.println("Category is: " + MI1.Category);
        	System.out.println("Price is: " + MI1.price);
    	}
}