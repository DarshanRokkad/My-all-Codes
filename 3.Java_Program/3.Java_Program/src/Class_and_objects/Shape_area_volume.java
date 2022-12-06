package Class_and_objects;

abstract class Shape
{
	abstract double area();
	abstract double perimeter();
}

class Rectangler extends Shape
{
	double length ;
	double breadth ;
	Rectangler(double l , double b )
	{
		length = l ;
		breadth = b ;
	}
	double area()
	{
		return (length*breadth);
	}
	double perimeter()
	{
		return (2*(length+breadth));
	}
}

class Circler extends Shape
{
	double radius;
	Circler (double r)
	{
		radius = r;
	}
	double area()
	{
		return (Math.PI*radius*radius);
	}
	double perimeter()
	{
		return (2*Math.PI*radius);
	}
}
 
public class Shape_area_volume {

	public static void main(String[] args) {
		Shape r = new Rectangler(5,6);
		System.out.println("Area of the rectangle is "+r.area());
		System.out.println("Perimeter of the rectangle is "+r.perimeter()+"\n");
		
		Shape c = new Circler(6.512);
		System.out.println("Area of the Circle is "+c.area());
		System.out.println("Perimeter of the Circle is "+c.perimeter());		
	}
}
