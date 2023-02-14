package lab_program;
import java.util.Scanner;

abstract class Vehicle 
{
	public int year_of_manufacture ;
	public Vehicle(int y)
	{
		year_of_manufacture = y ;
	}
	abstract public void putData();
	abstract public void getData();
}

class TwoWheeler extends Vehicle  
{
	Scanner sc=new Scanner (System.in);
	TwoWheeler(int x)
	{
		super(x);
	}
	public void putData()
	{
		System.out.print("Enter the year of manufacture of two wheeler : ");
		year_of_manufacture = sc.nextInt();
		getData();
	}
	public void getData()
	{
		System.out.println("Year of manufacture of Two Wheeler is "+year_of_manufacture);
	}
}

class MyTwoWheeler extends TwoWheeler
{
	MyTwoWheeler(int a)
	{
		super(a);
	}
}

final class FourWheeler extends Vehicle  
{
	Scanner sc=new Scanner (System.in);
	FourWheeler(int x)
	{
		super(x);
	}
	public void putData()
	{
		System.out.print("Enter the year of manufacture of four wheeler : ");
		year_of_manufacture = sc.nextInt();
		getData();
	}
	public void getData()
	{
		System.out.println("Year of manufacture of Four Wheeler is "+year_of_manufacture);
	}
}

public class Program_3 {
	public static void main(String args[])
	{
		MyTwoWheeler w1 = new MyTwoWheeler(2003);
		w1.getData();
		w1.putData();
		System.out.println("-----------");
		FourWheeler w2 = new FourWheeler(2004);
		w2.getData();
		w2.putData();
	}
}
