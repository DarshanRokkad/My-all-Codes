package unit_2;

class Super_class
{
	void display()
	{
		System.out.println("Display method of Super class");
	}
	void display(int a)
	{
		System.out.println("Overloaded Display method of Super class with a = "+a);
	}
}

class Sub_class extends Super_class
{
	void display()
	{
		System.out.println("Overrided Display method of Sub class");
	}
}

public class Overloading_and_Overriding {

	public static void main(String[] args) {
		Super_class sup = new Super_class();
		sup.display();
		sup.display(89);
		Sub_class sub = new Sub_class();
		sub.display();
	}
}
