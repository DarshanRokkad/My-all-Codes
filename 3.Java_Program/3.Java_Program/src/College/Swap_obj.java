package College;

class Number
{
	double n ;
	Number(double a)
	{
		n = a ;
	}
	void swap(Number num)
	{
		double tem = num.n;
		num.n = n ;
		n = tem ;
	}
}

public class Swap_obj {
	public static void main(String args[])
	{
		Number n1 = new Number(5);
		Number n2 = new Number(8);
		System.out.println("n1 object have n value : "+n1.n);
		System.out.println("n2 object have n value : "+n2.n);
		n1.swap(n2);
		System.out.println();
		System.out.println("n1 object have n value : "+n1.n);
		System.out.println("n2 object have n value : "+n2.n);
	}
}
