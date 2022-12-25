package Class_and_objects;

interface Shapes
{
	double area();
	double perimeter();
}

class Rectangl implements Shapes
{
	double length ;
	double breadth ;
	Rectangl(double l , double b )
	{
		length = l ;
		breadth = b ;
	}
	public double area()
	{
		return (length*breadth);
	}
	public double perimeter()
	{
		return (2*(length+breadth));
	}
}

class Circl implements Shapes
{
	double radius;
	Circl (double r)
	{
		radius = r;
	}
	public double area()
	{
		return (Math.PI*radius*radius);
	}
	public double perimeter()
	{
		return (2*Math.PI*radius);
	}
}
 
public class Shape_area_volume_interface {

	public static void main(String[] args) {
		Shapes r = new Rectangl(5,6);
		System.out.println("Area of the rectangle is "+r.area());
		System.out.println("Perimeter of the rectangle is "+r.perimeter()+"\n");
		
		r = new Circl(6.512);
		System.out.println("Area of the Circle is "+r.area());
		System.out.println("Perimeter of the Circle is "+r.perimeter());		
	}
}
