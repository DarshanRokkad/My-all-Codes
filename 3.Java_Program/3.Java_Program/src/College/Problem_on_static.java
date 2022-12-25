package College;

// Example for unit 1 - Q.4
public class Problem_on_static {
	static int a = 20 ;
	static int b ;
//	this static block is executed when the class is loaded 
	static 
	{
		b = 50 ;
	}
	static void display(int c)
	{
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
	}
	
	public static void main(String args[])
	{
		display(100);
	}
}	
