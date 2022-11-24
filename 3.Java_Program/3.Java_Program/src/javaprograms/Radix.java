package javaprograms;

import java.util.Scanner;

public class Radix {
	public static void main(String arg[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number : ");
		String str;
		str = sc.nextLine();
		
		if(str.matches("[01]+"))
		{
			System.out.println("The entered number is a binary number");
		}
		else if(str.matches("[0-7]*"))
		{
			System.out.println("The entered number is a octal number");
		}
		else if(str.matches("[0-9]*"))
		{
			System.out.println("The entered numeber is a decimal");
		}
		else if(str.matches("[0-9a-f]*"))
		{
			System.out.println("The entered number is a hexadecimal");
		}
		else 
		{
			System.out.println("The entered number is a invaild number");
		}
	}
}
