package Class_and_objects;

abstract class base
{
	public base()
	{
		System.out.println("Base class constructor");
	}
	public void method1()
	{
		System.out.println("Method 1 of base class");
	}
	abstract void method2();
}

class derived extends base
{
	public void method2()
	{
		System.out.println("Method 2 of derived class");
	}
}

public class Abstract_class {

	public static void main(String[] args) {
		base b= new derived();
		b.method1();
		b.method2();
	}

}
