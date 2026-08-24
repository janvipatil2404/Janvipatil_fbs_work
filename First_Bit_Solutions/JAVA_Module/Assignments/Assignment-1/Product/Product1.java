class Product1 {
    int productId;
    String productName;
    double price;
    int quantity;
}//Class Product1 ends here

class TestProduct1 {
    public static void main(String[] args) 
	{
        	System.out.println("This is TestProduct1 Class");

        	Product1 PD1;
        	PD1 = new Product1();

        	PD1.productId = 101;
        	PD1.productName = "Laptop";
        	PD1.price = 55000.0;
        	PD1.quantity = 2;

        	System.out.println("Product ID is: " + PD1.productId);
        	System.out.println("Product Name is: " + PD1.productName);
        	System.out.println("Price is: " + PD1.price);
        	System.out.println("Quantity is: " + PD1.quantity);
    	}
}