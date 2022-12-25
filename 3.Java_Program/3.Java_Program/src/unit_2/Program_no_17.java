package unit_2;

interface Figure 
{
	double Area();
	void Display();
}

class Rectangle implements Figure
{
	int len , bre ;
	public double Area()
	{
		return len*bre;
	}
	public void Display()
	{
		System.out.println("Area of rectangle : "+Area());
	}
}

class Triangle implements Figure
{
	int base , hei ;
	public double Area()
	{
		return (base*hei/2);
	}
	public void Display()
	{
		System.out.println("Area of triangle : "+Area());
	}
}

class Circlee implements Figure
{
	int radius;
	public double Area()
	{
		return (3.14*radius*radius);
	}
	public void Display()
	{
		System.out.println("Area of circle : "+Area());
	}
}

public class Program_no_17 {
	public static void main(String args[])
	{
		Rectangle r = new Rectangle();
		r.len = 5 ;
		r.bre =8;
		r.Display();
		Triangle t = new Triangle();
		t.base = 23 ;
		t.hei = 12 ;
		t.Display();
		Circlee c = new Circlee();
		c.radius = 2;
		c.Display();
	}
}
