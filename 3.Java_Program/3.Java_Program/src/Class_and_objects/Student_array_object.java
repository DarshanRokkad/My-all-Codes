package Class_and_objects;

class Student
{
	private String name ;
	private String roolno;
	private String dept ;
	private String Subject[];
	
	public Student(String name,String rool, String dept ,String sub[])
	{
		this.name = name ;
		roolno = rool ;
		this.dept = dept ;
		Subject = sub ;
	}
	
	public void display()
	{
		System.out.println("Name : "+name);
		System.out.println("Rool no : "+roolno);
		System.out.println("Department : "+dept);
		for(String s : Subject)
		{
			System.out.print(s+" ");
		}
		System.out.println();
		System.out.println();		
	}
	
	public void setsubject(String ...s)
	{
		for(int i = 0 ;i<s.length;i++)
		{
			Subject[i]=s[i];
		}
	}
	
	public String[] getsub()
	{
		return Subject;
	}
}

public class Student_array_object {

	public static void main(String[] args) {
		Student s[] = new Student[2];
		String sub[]= {"ds","java","oops","web"};
		s[0]=new Student("Darshan","1nt21cs058","cse",sub);
		s[1]=new Student("praju","1nt21s348","ise",sub);
		
		s[1].setsubject("web tech","java","c","python");
		for(Student c : s)
		{
			c.display();
		}
		
		String p[]=s[0].getsub();
		for(String x : p )
		{
			System.out.print(x+" ");
		}
	}
}
