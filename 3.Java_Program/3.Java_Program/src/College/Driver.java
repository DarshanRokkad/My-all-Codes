package College;

import java.util.Scanner;

class student
{
	String Usn ;
	String name ;
	student(String u , String n)
	{
		Usn = u ;
		name = n ;
	}
	void print()
	{
		System.out.println("Name : "+name);
		System.out.println("USN : "+Usn);
	}
}

public class Driver {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number of student : ");
		int n = sc.nextInt();
		student s[] = new student[n];
		for(int i = 0 ;i<n; i++)
		{
			String name ;
			String usn ;
			System.out.print("Enter your name of student "+(i+1)+" : ");
			name = sc.next();
			System.out.print("Enter your USN of student "+(i+1)+" : ");
			usn = sc.next();
			s[i]=new student(name,usn);			
		}
		System.out.println("**Information of the student**");
		for(student x : s)
		{
			x.print();
		}
	}
}
