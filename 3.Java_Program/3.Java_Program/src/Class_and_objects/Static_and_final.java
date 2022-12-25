package Class_and_objects;

class CoffeeMachine 
{
	private int coffeeqty;
	
	static private CoffeeMachine our = null ;
	private CoffeeMachine()
	{
		coffeeqty = 1 ;
	}
	static public CoffeeMachine getinstance()
	{
		if(our == null)
		{
			our = new CoffeeMachine();
		}
		return our ;
	}
}

public class Static_and_final {

	public static void main(String[] args) {
		
		CoffeeMachine m = CoffeeMachine.getinstance();
		CoffeeMachine m2 = CoffeeMachine.getinstance();
//		both the object will refer to the same object as we have restricted to one i.e in the class we have written null then only it will be created else it will not create the object 
		System.out.println(m);
		System.out.println(m2);
	}
}
