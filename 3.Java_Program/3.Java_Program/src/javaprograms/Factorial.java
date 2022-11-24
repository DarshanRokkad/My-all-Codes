package javaprograms;
import java.util.Scanner;
public class Factorial {
	public static void main(String arg[])
	{
		int n ;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number : ");
		n = sc.nextInt();
		int f = 1;
		for(int i = n ;i>0;i--)
		{
			f=f*i;
		}
		System.out.println("The factorial of "+n+" is "+f);
	}
}
