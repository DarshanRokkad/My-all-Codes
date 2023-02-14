package lab_program;
import java.util.Scanner;

interface display
{
	void displayResults();
}
class Calculator implements display
{
	int a , b ;
	Calculator(){ a= 0 ;b = 0 ;}
	Calculator(int a , int b)
	{
		this.a = a ;
		this.b = b ;
	}
	int add()
	{
		return a+b ; 
	}
	int sub()
	{
		return a-b ;
	}
	int mul()
	{
		return a*b ;
	}
	int div() throws ArithmeticException
	{
		return a/b;
	}
	public void displayResults()
	{
		System.out.println("The sum of "+a+" and "+b+" is "+add());
		System.out.println("The sub of "+a+" and "+b+" is "+sub());
		System.out.println("The multiplication of "+a+" and "+b+" is "+mul());
		try {
			System.out.println("The division of "+a+" and "+b+" is "+div());
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
		}
	}
}

class Additional_Feature extends Calculator implements display
{
	public Additional_Feature() { a = 0 ; b = 0 ; }
	public Additional_Feature(int a , int b)
	{
		super(a,b);
	}
	int mod()
	{
		return (a%b);
	}
	double squrt(int n) 
	{
		return (Math.sqrt(n));
	}
	public void displayResults()
	{
		System.out.println(a+" + "+b+" = "+add());
		System.out.println(a+" - "+b+" = "+sub());
		System.out.println(a+" * "+b+" = "+mul());
		try {
			System.out.println(a+" / "+b+" = "+div());
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
		}
		System.out.println(a+" % "+b+" = "+mod());
		System.out.println("Square root of "+a+" is "+squrt(a)+"\n"+"Square root of "+b+" is "+squrt(b));
	}
}

public class Program_5 {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the value of number 1 : ");
		int a = sc.nextInt();
		System.out.print("Enter the value of number 2 : ");
		int b = sc.nextInt();
		sc.close();
		Calculator af = new Additional_Feature(a,b);
		af.displayResults();
	}
}
