class BankAccount{
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;
}//Class BankAccount ends here

class TestBankAccount
	{
		public static void main(String[] args)
		{
			System.out.println("This is TestBankAccount Class");
			
			BankAccount BA1;
			BA1= new BankAccount();
			System.out.println(BA1);
		}
	}