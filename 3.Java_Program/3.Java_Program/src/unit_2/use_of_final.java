package unit_2;

class samp
{
	final int a = 10 ;
	final void display()
	{
		System.out.println("Super class display");
	}
}
class sam extends samp
{
	void display()
	{
		System.out.println("Sub class display");
	}
}

public class use_of_final {
	public static void main(String[] args) {
		sample_2 s = new sample_2(8,37);
		s.display();
	}
}