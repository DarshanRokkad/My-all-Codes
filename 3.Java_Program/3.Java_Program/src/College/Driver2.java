package College;

import java.util.Scanner;
class employee
{
	int id ;
	String name ;
	double basic_sal;
	employee(int i , String na , double bas)
	{
		id = i ;
		name = na ;
		basic_sal = bas;
	}
	void printEmpInfo()
	{
		System.out.println("Name : "+name);
		System.out.println("Id : "+id);
		employeesalary es = new employeesalary();
		es.print_salary();
		System.out.println();
	}
	class employeesalary
	{
		double da = 0.95*basic_sal;
		double IT = .3*basic_sal;
		double gross = basic_sal + da;
		double net_salary = compute_salary();
		double compute_salary()
		{
			return gross - IT;
		}
		void print_salary()
		{
			System.out.println("Basic salary : "+basic_sal);
			System.out.println("DA : "+da);
			System.out.println("IT : "+IT);
			System.out.println("Gross salary : "+gross);
			System.out.println("Net salary : "+net_salary);
		}
	}
}

public class Driver2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of employee : ");
		int n = sc.nextInt();
		employee e[] = new employee[n];
		for(int i = 0 ;i<n ;i++)
		{
			int id ;
			String na ;
			double sa ;
			System.out.print("Enter the id of employee "+(i+1)+" : ");
			id = sc.nextInt();
			System.out.print("Enter the name of employee "+(i+1)+" : ");
			na = sc.next();
			System.out.print("Enter the salary of employee "+(i+1)+" : ");
			sa = sc.nextDouble();
			e[i]=new employee(id , na, sa);
		}
		for(employee x : e)
		{
			x.printEmpInfo();
		}
	}
}