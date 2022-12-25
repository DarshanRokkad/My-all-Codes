package College;

abstract class p1
{
	int a = 24, b = 13 ;
	abstract int contact();
}

class t1 extends p1
{
	int contact ()
	{
		return a+b;
	}
}

class f1 extends p1 
{
	int contact()
	{
		return (a+b)/2;
	}
}

public class Dynamic_method_dispatch_clg {

	public static void main(String[] args) {
		p1 p = new t1();
		int add = p.contact();
		System.out.println("Add : "+add);
		
		p = new f1();
		int avg = p.contact();
		System.out.println("Average : "+avg);
	}

}
