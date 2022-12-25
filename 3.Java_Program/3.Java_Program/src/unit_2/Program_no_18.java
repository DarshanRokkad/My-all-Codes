package unit_2;

interface I1
{
	int a = 90 ;
	void display1();
}

interface I2 extends I1
{
	int b = 45;
	void display2();
}

interface I3 extends I1
{
	int c = 23;
	void display3();
}

interface P extends I2 , I3
{
	int d = 37;
	void display4();
}

class Q implements P
{
	public void display1()
	{
		System.out.println("Interface 1 with constant value : "+a);
	}
	public void display2()
	{
		System.out.println("Interface 2 with constant value : "+b);
	}
	public void display3()
	{
		System.out.println("Interface 3 with constant value : "+c);
	}
	public void display4()
	{
		System.out.println("Interface 4 with constant value : "+d);
	}
}

public class Program_no_18 {

	public static void main(String[] args) {
		Q a = new Q();
		a.display1();
		a.display2();
		a.display3();
		a.display4();
	}
}