package College;

class Book 
{
	String title ;
	String author ;
	String publisher ;
	double cost ;
	void input(String tit,String aut,String publ,double co)
	{
		title = tit ;
		author = aut ;
		publisher = publ ;
		cost = co ;
	}
	void display()
	{
		System.out.println("** Book details **");
		System.out.println("Title : "+title);
		System.out.println("Author : "+author);
		System.out.println("Publisher : "+publisher);
		System.out.println("Cost : "+cost);
	}
}

public class Library {
	public static void main(String agrs[])
	{
		Book b = new Book();
		b.input("Do epic shit", "Ankur warikoo", "Amazon", 300);
		b.display();
	}
}
