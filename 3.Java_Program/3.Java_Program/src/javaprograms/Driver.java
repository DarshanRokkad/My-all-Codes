package javaprograms;

class Employee
{
	String name ;
	int empid ;
	double salary ; 
	Employee(String nam , int emp , double sal)
	{
		name = nam ;
		empid = emp ;
		salary = sal ;
	} 
	Employee Compare(Employee e)
	{
		if(salary>e.salary)
		{
			return this ;
		}
		else 
		{
			return e;
		}
	}
	void display()
	{
		System.out.println("Name : "+name);
		System.out.println("Employee id : "+empid);
		System.out.println("Salary : "+salary);		
	}
}

public class Driver {
	public static void main(String args[])
	{
		Employee e1 = new Employee("AAABBc",254753,6789.93);
		Employee e2 = new Employee("CCYYCU",250016,3434.78);
		e1.display();
		e2.display();
		System.out.println("\nThe Emloyee with highest salary is : ");
		Employee e3 = e1.Compare(e2);
		e3.display();
	}
}