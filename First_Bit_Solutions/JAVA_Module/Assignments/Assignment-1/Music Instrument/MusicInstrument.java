class MusicInstrument{
    int instrumentId;
    String instrumentName;
    String Category;
    double price;
} //Class MusicInstrument ends here

class TestMusicInstrument
	{
    		public static void main(String[] args)
    		{
      			 System.out.println("This is TestMusicInstrument Class");

       			 MusicInstrument MI1;
        		 MI1= new MusicInstrument();
       			 System.out.println(MI1);
   		 }
	}