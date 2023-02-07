package collection_framework;
import java.util.*;
import java.util.Scanner;

class Book 
{
	int id , quantity ;
	String title , author , publisher ;
	public Book(int i , String title , String author , String publisher , int quantity)
	{
		this.id = i;
		this.title = title ;
		this.author = author ;
		this.publisher = publisher ;
		this.quantity = quantity;
	}
	Integer getId()
	{
		return id;
	}
	public String toString()
	{
		return (id+" "+title+" "+author+" "+publisher+" "+quantity);
	}
}

public class Book_Program {
	public static void main(String[] args) {
		ArrayList<Book> blist = new ArrayList<Book>();
		Book b1 = new Book(111,"let us c","Yestwanth","BPB",8);
		Book b2 = new Book(555,"DBMS","forzan","mc grawall",4);
		Book b3 = new Book(333,"OS","galvin","wiley",6);
		blist.add(b1);
		blist.add(b2);
		blist.add(b3);
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			System.out.println();
			System.out.println("Menu");
			System.out.println("1. Dispaly Books .");
			System.out.println("2. Sort .");
			System.out.println("3. Search .");
			System.out.println("4. Remove .");
			System.out.println("5. Exit .");
			System.out.print("Enter the choice : ");
			int x ; x = sc.nextInt();
			switch(x)
			{
			case 1:
				System.out.println("Books : ");
				for(Book bc : blist)
				{
					System.out.println(bc);
				}
				break ;
			case 2:
				blist.sort((a,c)->a.getId().compareTo(c.getId()));
				System.out.println(blist);
				break ;
			case 3:
				System.out.println("Enter the id to  be searched : ");
				int k ; k = sc.nextInt();
				boolean found = false ; 
				for(Book bc : blist)
				{
					if(bc.id==k) {
						found = true ;
						break ;
						}
				}
				if(found)
					System.out.println("Book with id "+k+" is present.");
				else 
					System.out.println("Book with id "+k+" is not present.");
				break ;
			case 4 : 
				System.out.println("Enter the title of the book to be removed : ");
				sc.nextLine();
				String key = sc.nextLine();
				boolean fo = false ;
				for(Book bc : blist)
				{
					if(bc.title.equals(key))
					{
						found = true ;
						blist.remove(bc);
						break;
					}
				}
				if(fo)
					System.out.println("Book with title "+key+" is removed.");
				else 
					System.out.println("Book with title "+key+" is not present.");
				break ;
			case 5 :
//				System.exit(0);
				return ;
			default:
				System.out.println("Please enter valid choice.");
			}
		}
	}
}
