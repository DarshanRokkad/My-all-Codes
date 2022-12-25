package College;

class Salary
{
	private int basic ;
	void input(int b)
	{
		basic = b;
	}
	void display()
	{
		System.out.println("Basic : "+basic);
		double da = 0.3*basic ;
		System.out.println("Da : "+da);
		double hra = 0.1*basic ;
		System.out.println("Hra : "+hra);
		double gross = basic + da + hra ;
		System.out.println("Gross : "+gross);
	}
}

public class Program12 {

	public static void main(String[] args) {
		Salary s = new Salary();
		s.input(1000);
		s.display();
	}
}
