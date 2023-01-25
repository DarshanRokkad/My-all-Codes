package expection_handling;
import java.util.Scanner;

class ValueException extends Exception 
{
	String msg ;
	int inch ;
	ValueException(String s, int in)
	{
		msg = s ;
		inch = in ;
	}
	public String toString()
	{
		return msg+inch;
	}
}

class Distance 
{
	int inch ;
	int feet ;
	void input() throws ValueException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the feet in distance : ");
		feet = sc.nextInt();
		System.out.print("Enter the inch in distance : ");
		inch = sc.nextInt();
		if(inch>12)
		{
			throw new ValueException("Exception raised -- Inches value should be <12 , you entered it as ",inch);
		}
	}
	Distance add(Distance d)
	{
		Distance ans = new Distance();
		ans.feet = feet + d.feet + (inch+d.inch)/12;
		ans.inch = (inch+d.inch)%12;		
		return ans ;
	}
	public String toString()
	{
		return feet+" feet "+inch+" inch. ";
	}
}

public class User {
	public static void main(String[] args) {
		Distance d1 = new Distance();			
		try {
			d1.input();
		}
		catch(ValueException e)
		{
			System.out.println(e);
		}
		
		Distance d2 = new Distance();
		try {		
			d2.input();
		}
		catch(ValueException e)
		{
			System.out.println(e);
		}		
		Distance ans = d1.add(d2);
		System.out.println(d1);
		System.out.println(" + ");
		System.out.println(d2);
		System.out.println(" = ");
		System.out.println(ans);
	}
}
