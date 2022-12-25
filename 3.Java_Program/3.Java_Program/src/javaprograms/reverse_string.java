package javaprograms;
import java.util.Scanner;
public class reverse_string {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the string : ");
		String s = sc.next();
		System.out.println("The string is : "+s);
		String n ="";
		int i = s.length()-1, j = 0 ;
		while(i>=j)
		{
			char ch = s.charAt(i);
			n=n+ch;
			i--;
		}
		System.out.println("The reversed string is : "+n);
	}
}
