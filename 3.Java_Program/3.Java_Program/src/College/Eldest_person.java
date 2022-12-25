package College;

import java.util.Scanner;
class person 
{
	String name ;
	int age ;
	person(String na ,int a)
	{
		name = na ;
		age = a ;
	}
	person greater_age(person p)
	{
		if(age>p.age)
		{
			return this;
		}
		else
		{
			return p;
		}
	}
}

public class Eldest_person {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of person : ");
		int n = sc.nextInt();
		person p[] = new person[n];
		for(int i = 0 ;i<n ;i++)
		{
			String name ;
			int age ;
			System.out.print("Enter the name of the student "+(i+1)+" : ");
			name = sc.next();
			System.out.print("Enter the age of the student "+(i+1)+" : ");
			age = sc.nextInt();
			p[i]=new person(name,age);
		}
		person max_age = p[0];
		for(int i =1 ;i<n-1 ;i++)
		{
			person current = p[i].greater_age(p[i+1]);
			if(max_age.age<current.age) {
				max_age = p[i];
			}
		}
		System.out.println();
		System.out.println("Person with greater age ");
		System.out.println("Name : "+max_age.name);
		System.out.println("Age : "+max_age.age);
	}
}
