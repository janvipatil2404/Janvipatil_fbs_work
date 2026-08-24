class BankAccount1 {
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;
}//Class BankAccount1 ends here

class TestBankAccount1 {
    public static void main(String[] args) 
	{
        	System.out.println("This is TestBankAccount1 Class");

        	BankAccount1 BA1;
        	BA1 = new BankAccount1();

        	BA1.accountNumber = 1234567890L;
        	BA1.holderName = "Janvi";
        	BA1.currentBalance = 50000.0;
        	BA1.interestRate = 7.5;

        	System.out.println("Account Number is: " + BA1.accountNumber);
        	System.out.println("Holder Name is: " + BA1.holderName);
        	System.out.println("Current Balance is: " + BA1.currentBalance);
        	System.out.println("Interest Rate is: " + BA1.interestRate);
    	}
}