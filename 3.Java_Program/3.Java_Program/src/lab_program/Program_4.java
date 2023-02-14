package lab_program;
import java.util.Scanner;

abstract class Shape
{
	int dim1 , dim2 ;
	public Shape(int a ,int b)
	{
		dim1 = a ;
		dim2 = b ;
	}
	abstract public void printArea();
}

class Rectangle extends Shape
{
	public Rectangle(int length , int breadth)
	{
		super(length,breadth);
	}
	public void printArea()
	{
		System.out.println("The area of rectangle with length "+dim1+" and breadth "+dim2+" is "+(dim1*dim2));
	}
}

class Triangle extends Shape
{
	public Triangle(int base , int height)
	{
		super(base , height);
	}
	public void printArea()
	{
		double area = (dim1 * dim2)/2 ;
		System.out.println("The area of Triangle with base "+dim1+" and height "+dim2+" is "+area);
	}
}

class Circle extends Shape
{
	public Circle(int radius)
	{
		super(radius,0);
	}
	public void printArea()
	{
		System.out.println("The area of circle with radius "+dim1+" is "+(Math.PI*dim1*dim1));
	}
}

public class Program_4 {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the length and breadth of the rectangle : ");
		int length = sc.nextInt();
		int breadth = sc.nextInt();
		Rectangle rect = new Rectangle(length , breadth);
		rect.printArea();
		System.out.println();
		
		System.out.print("Enter the base and height of the triangle : ");
		int base = sc.nextInt();
		int height = sc.nextInt();
		Triangle tri = new Triangle(base , height );
		tri.printArea();
		System.out.println();
		
		System.out.print("Enter the radius of the Circle : ");
		int radius = sc.nextInt();
		Circle cir = new Circle(radius);
		cir.printArea();
		System.out.println();
		sc.close();
	}
}
