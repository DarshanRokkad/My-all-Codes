package lab_program;
import java.util.Random;

class Number extends Thread
{
	int RandomNumber ;
	public void run()
	{
		Random rand = new Random();
		while(true) 
		{
			RandomNumber = rand.nextInt(100);
			if(RandomNumber%2==0)
			{
				Square sq = new Square(RandomNumber);
				sq.start();
			}
			else 
			{
				Cube cu = new Cube(RandomNumber);
				cu.start();
			}
			try{ Thread.sleep(1000); } catch(InterruptedException e){}
			System.out.println();
		}		
	}
}

class Square extends Thread 
{
	int sq ;
	public Square(int n )
	{
		sq = n ;
	}
	public void run()
	{
		System.out.println(sq+" is a even");
		System.out.println("Square of "+sq+" is "+(sq*sq));	
	}
}
class Cube extends Thread 
{
	int cu ;
	public Cube (int n)
	{
		cu = n ;
	}
	public void run()
	{	
		System.out.println(cu+" is a odd number");
		System.out.println("Cube of "+cu+" is "+(cu*cu*cu));
	}
}

public class Program_6 {
	public static void main(String[] args) {
		Number n = new Number();
		n.start();
	}
}