package unit_2;

abstract class Students 
{
	abstract void hi();
}

class clg extends Students
{
	void hi()
	{
		System.out.println("Hi students");
	}
}

public class Abstract_reference {
	public static void main(String args[])
	{
		Students s = new clg();
		s.hi();
	}
}
