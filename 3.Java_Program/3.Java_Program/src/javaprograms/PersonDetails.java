package javaprograms;

class Person
{
	String name;
	int age ;
	Person(String name ,int age)
	{
		this.name = name ;
		this.age = age ;
	}
	void display()
	{
		System.out.println("Name : "+this.name+"\nAge : "+this.age);
	}
	Person Compare(Person x)
	{
		Person p = null;
		if(age>x.age) {
			p.age = this.age;
			p.name = this.name;
			return p;
		}
		else 
		{
			return x ;
		}
	}
}
public class PersonDetails {

	public static void main(String[] args) {
		Person p1 = new Person("Rakshitha",18);
		Person p2 = new Person("Chintu",19);
		p1.display();
		p2.display();
		Person p3 = p1.Compare(p2);
		System.out.println("\nThe Person with greater age is ");
		p3.display();
	}
}
