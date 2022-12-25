package Class_and_objects;

public class Static_blocks {
	static 
	{
		System.out.println("Static block 1 ");
	}
	public static void main(String args[])
	{
		System.out.println("This is the main method");
	}
	static 
	{
		System.out.println("Static block 2");
	}
}
