package College;

class Overload
{
	int len ;
	int bre ;
	Overload()
	{
		len = 0 ;
		bre = 0 ;   
	}
	Overload(int l)
	{
		len = l ;
		bre = 0 ;
	}
	Overload(int l , int b)
	{
		len = l ;
		bre = b ;
	}
}

public class Overload_constructor {

	public static void main(String[] args) {
		Overload o1 = new Overload();
		Overload o2 = new Overload(6);
		Overload o3 = new Overload(7,8);
	}
}
