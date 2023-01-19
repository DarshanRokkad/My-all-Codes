package expection_handling;

class NegativeDimensionException extends Exception
{
//	here we are overriding toString method of the Exception class
	public String toString()
	{
		return "Negative dimension exception";
	}
}

public class User_def 
{
	
	static int area(int l , int b) throws NegativeDimensionException
	{
		if(l<0||b<0)
		{
//			here i am throwing the object of the NegativeDimensionException class
			throw new NegativeDimensionException();
		}
		int a = l*b;
		return a;
	}
	
	static void method1()
	{
		try
		{
//			int a = area(-3,56);
			int a = area(3,56);
			System.out.println("Area : "+a);			
		}
		catch(NegativeDimensionException e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("Getting out of method 1 block");
		}
	}
	
	public static void main(String args[])
	{
		method1();
	}
}
