package Class_and_objects;

class Product 
{
	private String itemNo;
	private String name;
	private double price ;
	private int qty;
//	constructors
	public Product(String item,String name )
	{
		itemNo = item;
		this.name = name ;
		price = 99.9;
		qty = 60;
	}
	public Product(String item,String name,double pri , int q )
	{
		itemNo = item;
		this.name = name ;
		price = pri;
		qty = q ;
	}
//	getter methods
	public String getitem()
	{
		return itemNo;
	}
	public String getname()
	{
		return name;
	}
	public double getprice()
	{
		return price;
	}
	public int qty()
	{
		return qty;
	}
//	setter method 
	public void setprice(double pri)	
	{
		price = pri;
	}
	public void setqyt(int qua)
	{
		qty = qua ;
	}
//	methods
	public void details()
	{
		System.out.println("Item : "+name);
		System.out.println("Item id : "+itemNo);
		System.out.println("price : "+price);
		System.out.println("Quantity : "+qty);
	}
}

public class Properties_and_constructor_3 {
	public static void main(String args[])
	{
//		Product p = new Product("pes275","Pepsi");
//		p.details();
//		System.out.println("");
//		Product q = new Product("lap345","Laptop",69499.5,8);
//		q.details();
		Product p[]=new Product[2];
		p[0]=new Product("pes275","Pepsi");
		p[1]=new Product("lap345","Laptop",69499.5,8);
		for(Product x : p)
		{
			x.details();
			System.out.println("");
		}
	}
}
