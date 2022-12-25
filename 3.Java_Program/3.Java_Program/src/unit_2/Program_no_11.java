package unit_2;

abstract class F1
{
	double x =5;
	double y =9;
	abstract double compute();
}

class R1 extends F1
{
	double compute()
	{
		return x+y;
	}
}

class T2 extends F1 
{
	double compute()
	{
		return (x*y)/2;
	}
}

public class Program_no_11 {
	public static void main(String args[])
	{
		F1 f = new R1();
		System.out.println(f.compute());
		f = new T2();
		System.out.println(f.compute());
	}
}
