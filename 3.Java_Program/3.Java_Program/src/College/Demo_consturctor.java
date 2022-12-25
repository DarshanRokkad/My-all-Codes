package College;

class Demo
{
	private int age ;
	Demo()
	{
		age = 18;
	}
	Demo(int a)
	{
		age = a ;
	}
	void display()
	{
		System.out.println("Value of age : "+age);
	}
}

public class Demo_consturctor {

	public static void main(String[] args) {
		Demo d1 = new Demo();
		Demo d2 = new Demo(24);	
		d1.display();
		d2.display();
	}
}
