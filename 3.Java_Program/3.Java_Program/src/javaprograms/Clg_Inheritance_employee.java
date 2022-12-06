package javaprograms;

class superclass
{
	int a;
	int b ;
	int add()
	{
		return a+b;
	}
	int sub()
	{
		return a-b;
	}
}

class subclass extends superclass
{
	int multi()
	{
		return a*b;
	}
}

public class Clg_Inheritance_employee {
	public static void main(String[] args) {
		subclass s = new subclass();
		s.a= 90;
		s.b= 23;
		System.out.println(s.a+" + "+s.b+" = "+s.add());
		System.out.println(s.a+" - "+s.b+" = "+s.sub());
		System.out.println(s.a+" * "+s.b+" = "+s.multi());
	}

}
