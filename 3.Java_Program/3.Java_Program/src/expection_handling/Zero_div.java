package expection_handling;

class Zero_div
{
	public static void main(String args[])
	{
		int a , b , c ;
		a = 5;
		b = 10;
		int arr[]={5,36,6};
		try {
		c = a/b;			
		System.out.println("The value is "+c);
		}
		catch(ArithmeticException e)
		{
			System.out.println("Division by zero.");
		}
		try {
			arr[10]=30;
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("Array index is out of bound.");
			
		}
	}
}