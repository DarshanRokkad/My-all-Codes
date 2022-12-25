package mse1;

import java.util.Scanner;
class Student
{
	private String name ;
	private String USN ;
	private int age ;
	private String Branch ;
	private double cgpa;
	Student(String na, String u , int ag , String b , double c )
	{
		name = na ;
		USN = u ;
		age = ag;
		Branch = b ;
		cgpa = c;
	}
	void display()
	{
		System.out.println("Name : "+name);
		System.out.println("USN : "+USN);
		System.out.println("Age : "+age);
		System.out.println("Branch : "+Branch);
		System.out.println("CGPA : "+cgpa);
	}
	String getbranch()
	{
		return Branch;
	}
	double getgpa()
	{
		return cgpa;
	}
}

public class Array_of_students {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of students : ");
		int n = sc.nextInt();
		Student s []= new Student[n];
		for(int i = 0 ;i<n ;i++)
		{
			String na , usn , br ;
			int age ;
			double cg;
			System.out.println("Enter the information of the student "+(i+1)+" : ");
			System.out.print("Enter Name :");
			na = sc.next();
			System.out.print("Enter USN : ");
			usn = sc.next();
			System.out.print("Enter age : ");
			age = sc.nextInt();
			System.out.print("Enter Branch : ");
			br = sc.next();
			System.out.print("Enter CGPA: ");
			cg = sc.nextDouble();
			
			s[i]= new Student(na,usn,age,br,cg);
		}		
		System.out.println("Student With cgpa greater than or equal to 9 and CSE department is : ");
		for(int i = 0 ;i<n ;i++)
		{
			if(s[i].getbranch().equalsIgnoreCase("CSE")&&s[i].getgpa()>=9.0)
			{
				s[i].display();
			}
		}
	}
}
