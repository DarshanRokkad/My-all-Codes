package unit_2;

class Animal 
{
	void ani()
	{
		System.out.println("This is a animal class");
	}
}

class Dog extends Animal
{
	void doge()
	{
		System.out.println("This is a Dog");
	}
}

class BabyDog extends Dog
{
	void baby() {
		System.out.println("This is a Baby dog class");
	}
}

public class Program_no_8 {

	public static void main(String[] args) {
		Animal a = new Animal();
		a.ani();
		System.out.println();
		
		Dog d = new Dog();
		d.ani();
		d.doge();
		System.out.println();
		
		BabyDog bd = new BabyDog();
		bd.ani();
		bd.doge();
		bd.baby();
	}
}
