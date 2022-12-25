package unit_2;

class employee
{
	int empid ;
	String name ;
	int salary ;
	void input(int id , String na , int sa)
	{
		empid = id ;
		name = na ;
		salary = sa;
	}
	void display()
	{
		System.out.println("Name : "+name);
		System.out.println("Employee id : "+empid);
		System.out.println("Salary : "+salary);
	}
}

class programmer extends employee
{
	int bonus ;
	void input(int id , String na , int sa,int bo)
	{
		super.input(id, na, sa);
		bonus = bo;
	}
	void display()
	{
		super.display();
		System.out.println("Bonus : "+bonus);
	}
}

public class Program_no_7 {
	public static void main(String args[])
	{
		programmer p = new programmer();
		p.input(23456, "aaaa", 15000 , 250);
		p.display();
	}
}
