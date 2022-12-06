package javaprograms;

public class Methodoverloading {
	int add(int a ,int b )
	{
		return a+b;
	}
	public static void main(String args[])
	{
		int a = 7 , b = 5 ;
		System.out.println(add(a,b));
//		System.out.println(add(a));
	}
}
