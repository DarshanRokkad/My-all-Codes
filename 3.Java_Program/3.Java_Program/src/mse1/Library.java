package mse1;

import java.util.Scanner;
class Book 
{
	String title,author , publisher; 
	double cost;
	Scanner sc = new Scanner(System.in);
	Scanner sc2 = new Scanner(System.in);
	Scanner sc3 = new Scanner(System.in);
	void input()
	{
		System.out.print("Enter title : ");
		title = sc.next();
		System.out.print("Enter author : ");
		author = sc2.nextLine();
		System.out.print("Enter publisher : ");
		publisher = sc3.next();
		System.out.print("Enter cost of the book : ");
		cost = sc2.nextDouble();
	}
	void display()
	{
		System.out.println("Title : "+title);
		System.out.println("Author : "+author);
		System.out.println("Publisher : "+publisher);
		System.out.println("Cost : "+cost);
	}
}

public class Library {
	public static void main(String[] args) {
		Book b = new Book();
		b.input();
		b.display();
	}
}
