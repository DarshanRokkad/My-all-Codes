package Class_and_objects;

class Cell 
{
	private String name ;
	private String ime ;
	private int mobileno;
	public Cell(String na , String im , int mobile)
	{
		name = na ;
		ime = im ;
		mobileno = mobile;
	}
	public int getmobileno()
	{
		return mobileno;
	}
	public String getime()
	{
		return ime ;
	}
	public void display ()
	{
		System.out.println("Name : "+name);
		System.out.println("IME : "+ime);
		System.out.println("Mobile no : "+mobileno);
	}
}
class Smartphone extends Cell
{
	private int ram ;
	private int rom ;
	public Smartphone(String na , String im , int mobile,int ram ,int rom)
	{
		super(na ,im , mobile);
		this.ram = ram ;
		this.rom = rom ;
	}
	public int getram()
	{
		return ram;
	}
	public int getrom()
	{
		return rom ;
	}
	public void display ()
	{
		super.display();
		System.out.println("RAM : "+ram);
		System.out.println("ROM : "+rom);
	}
}

public class Inheritance_cell {
	public static void main(String args[])
	{
		Cell c = new Cell("darshan","2398uidhu",83493);
		Smartphone s = new Smartphone("fasdf","dfdf234",8923,8,89);
		c.display();
		System.out.println();
		s.display();
	}
}
