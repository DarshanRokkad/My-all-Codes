package javaprograms;

import java.util.Scanner;

public class Name_extract_email {
	public static void main(String arg[])
	{
		String email ;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your email : ");
		email = sc.nextLine();
		
		int len = email.indexOf('@');
		String name=email.substring(0,len);		
		System.out.println("\nYour name is "+name);
		
		if(email.matches(".*@gmail.(.*)"))
		{
			System.out.println("Your domain is a gmail");
		}
		else
		{
			int st = email.indexOf("@");
			int en = email.indexOf(".");
			String str = email.substring(st+1,en);
			System.out.println("Your domain name is "+str);
		}
	}
}
