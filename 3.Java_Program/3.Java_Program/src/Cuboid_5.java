
class Rectangle 
{
	private int length ;
	private int breadth ;
	public Rectangle(int length ,int breadth)
	{
		this.length = length ;
		this.breadth = breadth ;
	}
	public int area()
	{
		return (length*breadth);
	}
	public int getlength()
	{
		return length ;
	}
	public int getbreadth()
	{
		return breadth ;
	}
}

class Cubiod extends Rectangle 
{
	private int height ;
	public Cubiod(int l ,int b , int height)
	{
		super(l,b);
		this.height = height ;
	}
	public int volume()
	{
		return (getbreadth()*getlength()*height);
	}
}

public class Cuboid_5 {

	public static void main(String[] args) {
		Rectangle r = new Rectangle(7,8);
		Cubiod c = new Cubiod(3,9,6);
		System.out.println("The Area of the rectangle is "+r.area());
		System.out.println("The Volume of the rectangle is "+c.volume());
	}

}
