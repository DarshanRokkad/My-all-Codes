package unit_2;

import java.util.Scanner;
class Department
{
	private String collegeName;
	private String DeptName;
	void set_collegeName(String na)
	{
		collegeName = na ;
	}
	void set_DeptName(String dn)
	{
		DeptName = dn ;
	}
	String get_collegeName()
	{
		return collegeName;
	}
	String get_DeptName()
	{
		return DeptName;
	}
}

class Student extends Department
{
	private String studUsn ;
	private String studName;
	void set_studUsn(String na)
	{
		studUsn = na ;
	}
	void set_studName(String dn)
	{
		studName = dn ;
	}
	void check()
	{
		if(get_collegeName()=="NMIT"&&get_DeptName()=="CSE")
		{
			System.out.println("Yes");
		}
		else
		{
			System.out.println("No");
		}
	}
}

public class College {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number of student : ");
		int n = sc.nextInt();
		Student s[]=new Student[n];
		for(int i = 0 ;i<n ;i++)
		{
			String name , usn , clg , dept ;
			System.out.print("Enter student "+(i+1)+" name : ");
			name = sc.next();
			System.out.print("Enter student "+(i+1)+" usn : ");
			usn = sc.next();
			System.out.print("Enter student "+(i+1)+" department : ");
			dept = sc.next();
			System.out.print("Enter student "+(i+1)+" college : ");
			clg = sc.next();
			s[i] =  new Student();
			s[i].set_studName(name);
			s[i].set_studUsn(usn);
			s[i].set_DeptName(dept);
			s[i].set_collegeName(clg);
		}
		for(int i = 0 ;i<n ;i++)
		{
			System.out.print("Student "+(i+1)+" is a Nmit cse student : ");
			s[i].check();
		}
	}
}
