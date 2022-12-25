package Class_and_objects;

class Student_s
{
	private String name;
	private String rool_no;
	private static int count = 1 ;
	private String assignno()
	{
		String s = "1NT21CS00"+count;
		count++;
		return s ;
	}
	public Student_s(String name)
	{
		this.name = name ;
		rool_no = assignno();
	}
	void display()
	{
		System.out.println(name+" : "+rool_no);
	}
}

public class Student_usn_genterator {
	public static void main(String args[])
	{
		Student_s s[] = new Student_s[3];
		s[0] = new Student_s("Darshan");
		s[1] = new Student_s("Sanket");
		s[2] = new Student_s("Amogha");
		for(Student_s x : s)
		{
			x.display();
		}
	}
}
