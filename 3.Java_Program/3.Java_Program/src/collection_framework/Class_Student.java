package collection_framework;
import java.util.*;

class Student
{
	int roolno;
	String name ;
	int age ;
	public Student(int r , String n , int a)
	{
		roolno = r ;
		name = n ;
		age = a ;
	}
	public String toString()
	{
		return (name+" "+roolno+" "+age);
	}
}

public class Class_Student {
	public static void main(String args[])
	{
		Student s1 = new Student(1,"Darshan",13);
		Student s2 = new Student(2,"Senior",18);
		Student s3 = new Student(3,"Sanketh",29);
		ArrayList<Student> al = new ArrayList<Student>();
		al.add(s1);
		al.add(s2);
		al.add(s3);
		Iterator it = al.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}
		
		System.out.print("Student name match : ");
		String key = "Darshan";
		it = al.iterator();
		while(it.hasNext())
		{
			Student s = (Student)it.next();
			if(s.name==key)
			{
				System.out.println(s);
			}
		}
	}
}
