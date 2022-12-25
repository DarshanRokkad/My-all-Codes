package College;

import java.util.Scanner;
public class Multiply_int {

	static int multiply(int a , int b)
	{
		if(a==0||b==0)
		{
			return 0 ;
		}
		else 
		{
			if(a==1)
			{
				return b;
			}
			else if (b==1)
			{
				return a;
			}
			else
			{
				return a+multiply(a,b-1);
			}
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number 1 : ");
		int num1 = sc.nextInt();
		System.out.print("Enter number 2 : ");
		int num2 = sc.nextInt();
		int pro = multiply(num1,num2);
		System.out.println("Mutliplication of num1 and num2 is "+pro);
	}
}
