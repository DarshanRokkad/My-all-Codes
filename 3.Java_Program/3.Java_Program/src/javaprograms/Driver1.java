
class Student
{
	private String name;
	private String USN;
	Student(String name,String USN)
	{
		this.name = name;
		this.USN = USN;
	}
	void display()
	{
		System.out.println("Name : "+this.name);
		System.out.println("USN : "+this.USN);
	}
}
class Driver1
{
	public static void main(String args[])
	{
		Student s = new Student("Rakshitha","1NT21CS143");
		Student s2 = new Student("Sthuthi","1NT21CS01");
		s.display();
		System.out.println();
		s2.display();
	}
}