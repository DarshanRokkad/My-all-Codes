package College;

import java.util.Scanner;
public class String_con {

	static String reverse(String s)
	{
		String rev = "";
		int len = s.length();
		for(int i = 0 ;i<len;i++)
		{
			char ch = s.charAt(len-1-i);
			rev=rev+ ch ;
		}
		return rev;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s1, s2 ;
		System.out.print("Enter the string 1 : ");
		s1 = sc.next();
		System.out.print("Enter the string 2 : ");
		s2 = sc.next();
		String can = s1+s2 ;
		String rev = reverse(can);
		System.out.println("Reversed concatinated string : "+rev);
	}
}
