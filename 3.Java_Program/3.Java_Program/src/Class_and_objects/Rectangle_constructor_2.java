package Class_and_objects;

class Rectangle 
{
	private int length ;
	private int breadth;
	public Rectangle()
	{
		length = 1 ;
		breadth = 1;
	}
	public Rectangle(int length , int breadth)
	{
		this.length=length;
		this.breadth=breadth;
	}
}


public class Rectangle_constructor_2 {
	public static void main(String args[])
	{
		Rectangle r = new Rectangle();
		Rectangle r2 = new Rectangle(5,9);
	}
}
