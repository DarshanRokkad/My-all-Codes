package Class_and_objects;

class Tv
{
	public void switchon() {
		System.out.println("Tv is on");
	}
	public void displayhi()
	{
		System.out.println("Hello frendz from base class");
	}
}
class Smarttv extends Tv
{
	public void switchon()
	{
		System.out.println("Smart Tv is on");
	}
	public void display()
	{
		super.displayhi();
		System.out.println("Hello frendz from the derived class");
	}
}

public class Dynamic_method_dispatch {

	public static void main(String args[])
	{
		Tv t =new Tv();
		t.switchon();
		
		Smarttv st = new Smarttv();
		st.switchon();
		st.displayhi();
		st.display();
		
		Tv s = new Smarttv();
		s.switchon();
//		we cannot use the 
//		s.display();
	}
}
