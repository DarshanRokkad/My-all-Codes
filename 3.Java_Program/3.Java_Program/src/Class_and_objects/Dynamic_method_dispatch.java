package Class_and_objects;

class Tv
{
	public void switchon() {
		System.out.println("Tv is on");
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
		System.out.println("Hello frendz");
	}
}

public class Dynamic_method_dispatch {

	public static void main(String args[])
	{
		Tv t =new Tv();
		t.switchon();
		
		Smarttv st = new Smarttv();
		st.switchon();
		
		Tv s = new Smarttv();
		s.switchon();
//		we cannot use the 
//		s.display();
	}
}
