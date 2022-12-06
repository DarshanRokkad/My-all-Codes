package Class_and_objects;

class Circle
{
	public double radius;
	public double area()
	{
		return (Math.PI*radius*radius);
	}
	public double perimeter()
	{
		return (2*Math.PI*radius);
	}
}

public class Cricle1 {
	public static void main(String args[])
	{
		Circle c = new Circle();
		c.radius = 7.3;
		double a =c.area();
		System.out.println("Area of the circle : "+a);
		System.out.println("Circumference of the circle : "+c.perimeter());
	}
}
