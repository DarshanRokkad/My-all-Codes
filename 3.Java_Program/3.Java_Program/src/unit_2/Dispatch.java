package unit_2;

class Calculate
{
	int a = 15;
	int b = 7;
	void display()
	{
		System.out.println("Super class");
	}
}

class AddC extends Calculate
{
	int add()
	{
		return a+b;
	}
	void display()
	{
		System.out.println("Sum of "+a+" and "+b+" is "+add());
	}
}

class SubC extends Calculate
{
	int sub()
	{
		return a-b;
	}
	void display()
	{
		System.out.println("Subtraction of "+a+" and "+b+" is "+sub());
	}
}

public class Dispatch {

	public static void main(String[] args) {
		Calculate c = new AddC();
		c.display();
		c = new SubC();
		c.display();
	}
}
