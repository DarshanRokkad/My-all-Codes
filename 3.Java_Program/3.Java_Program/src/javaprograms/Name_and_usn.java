package javaprograms;
class Student
{
private String Name;
private String USN;

Student(String name,String usn)
{
Name = name;
USN = usn;
}
void display()
{
	System.out.println("Name : "+Name);
	System.out.println("USN : "+USN);
}

}
public class Name_and_usn
{
	public static void main(String args[])
	{
		Student s = new Student("aaaaaaaaa","1NT21CS477");
		Student s2 = new Student("bbbbbbbb","1NT21CS602");
		s.display();
		System.out.println();
		s2.display();
	}
}