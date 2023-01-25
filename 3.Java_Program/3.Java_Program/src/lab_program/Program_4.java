package lab_program;
import java.util.Scanner;

abstract class Shape
{
	int d1 , d2 ;
	abstract void printArea();
}

class Rectangle extends Shape
{
	public Rectangle()
	{
		d1 = 0 ;
		d2 = 0 ;
		
	}
	void input()
	{
		System.out.print("Enter the length and breadth of the rectangle : ");
		Scanner sc1 = new Scanner(System.in);
		d1 = sc1.nextInt();
		d2 = sc1.nextInt();
		sc1.close();
		printArea();
	}
	public void printArea()
	{
		System.out.println("The area of rectangle with length "+d1+" and breadth "+d2+" is "+(d1*d2));
	}
}

class Triangle extends Shape
{
	public Triangle()
	{
		d1 = 0 ;
		d2 = 0 ;
	}
	void input()
	{
		System.out.print("Enter the base and height of the triangle : ");
		Scanner sc2 = new Scanner(System.in);
		sc2.nextLine();
		sc2.nextLine();
		d1 = sc2.nextInt();
		d2 = sc2.nextInt();
		sc2.close();
		printArea();
	}
	public void printArea()
	{
		int area = d1 * d2 ;
		System.out.println("The area of Triangle with base "+d1+" and height "+d2+" is "+(area/2));
	}
}

class Circle extends Shape
{
	int r ;
	public Circle()
	{
		d1 = 0 ;
		d2 = 0 ;
	}
	void input()
	{
		System.out.print("Enter the radius of the circle : ");
		Scanner sc3 = new Scanner(System.in);
		sc3.nextLine();
		if(sc3.hasNextInt())
			r = sc3.nextInt();
		else 
			r = 0 ;
		sc3.close();
		printArea();
	}
	public void printArea()
	{
		System.out.println("The area of circle with radius "+r+" is "+(Math.PI*d1*d1));
	}
}

public class Program_4 {
	public static void main(String args[])
	{
		Rectangle r = new Rectangle();
		Triangle t = new Triangle();
		Circle c = new Circle();
		r.input();
		t.input();
		c.input();
	}
}
