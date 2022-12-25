package unit_2;

class Shapes
{
	double dim =8 ;
	void area()
	{
		System.out.println("Shape has no area because of no specific dimension");
	}
}

class Circle extends Shapes 
{
	void area()
	{
		System.out.println("Area of circle of radius "+dim+" is "+(double)(3.14*dim*dim));
	}
}

class Square extends Shapes
{
	void area()
	{
		System.out.println("Area of square of sides "+dim+" is "+(dim*dim));
	}
}

public class Program_no_12 {

	public static void main(String[] args) {
		Shapes s = new Shapes();
		s.area();
		s = new Circle();
		s.area();
		s = new Square();
		s.area();
	}
}
