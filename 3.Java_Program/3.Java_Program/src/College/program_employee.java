package College;

class Employee
{
	String empname ;
	String empid;
	int age ;
	String occupation ;
	int income;
	
	Employee(String na, String id , int ag , String occ , int inc)
	{
		empname = na ;
		empid = id ;
		age = ag  ;
		occupation = occ ;
		income = inc;
	}
	public void display()
	{
		System.out.println("** Employee Details **");
		System.out.println("Name : "+empname);
		System.out.println("Employee id  : "+empid);
		System.out.println("Age : "+age);
		System.out.println("Occupation : "+occupation);
		System.out.println("Income : "+income);
		System.out.println();
	}
}

public class program_employee {

	public static void main(String[] args) {
		Employee e[]=new Employee[4];
		e[0]=new Employee("Aaaaaaa","1nt21cs001",18,"Software engineer",18000);
		e[1]=new Employee("bbbbbbb","1nt21cs002",16,"Software developer",11000);
		e[2]=new Employee("Ccccccc","1nt21cs003",20,"Web developer",16000);
		e[3]=new Employee("Eeeeeee","1nt21cs005",18,"Ui / Ux designer",10000);
		
		System.out.println("Employee with income greater than 15000");
		for(Employee x : e)
		{
			if(x.income>15000)
			{
				x.display();
			}
		}
	}
}
