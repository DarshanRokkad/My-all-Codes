package unit_2;

class sample_1
{
	int a = 10;
	sample_1(int c)
	{
		a =c ;
	}
	void display()
	{
		System.out.println("Super class display");
	}
}
class sample_2 extends sample_1
{
	int a = 19;
	sample_2(int x ,int y )
	{
		super(x);
		a = y ;
	}
	void display()
	{
		super.display();
		System.out.println(a);
		System.out.println(super.a);
	}
}

public class Use_of_super {

	public static void main(String[] args) {
		sample_2 s = new sample_2(8,37);
		s.display();
	}
}
