package collection_framework;

import java.util.*;
import java.util.Scanner;

class Book1 {
	String title, author, publisher;
	int id, quantity;

	public Book1(int i, String t, String a, String p, int q) {
		title = t;
		author = a;
		publisher = p;
		id = i;
		quantity = q;
	}

	public String toString() {
		return (id + " " + title + " " + author + " " + publisher + " " + quantity);
	}

	public Integer getid() {
		return id;
	}
}

public class Book_collection {

	public static void main(String[] args) {
		HashSet<Book1> h = new HashSet<>();
		Book1 b1 = new Book1(111, "let us c", "Yestwanth", "BPB", 8);
		Book1 b2 = new Book1(555, "DBMS", "forzan", "mc grawall", 4);
		Book1 b3 = new Book1(333, "OS", "galvin", "wiley", 6);
		h.add(b1);
		h.add(b2);
		h.add(b3);
		h.add(b2);
		System.out.println("1. Display.");
		System.out.println("2. Search by id .");
		System.out.println("3. Remove book by title.");
		System.out.println("Enter the chioce : ");
		Scanner sc = new Scanner(System.in);
		int c = sc.nextInt();
		switch (c) {
		case 1:
			System.out.println("Book has set is ");
			for (Book1 b : h) {
				System.out.println(b);
			}
			break;
		case 2:
			System.out.println("Enter the id to search : ");
			int i = sc.nextInt();
			boolean flag = true;
			for (Book1 b : h) {
				if (b.getid() == i) {
					flag = false;
					System.out.println(i + " id is present in the hashset.");
					break;
				}
			}
			if (flag)
				System.out.println("Book with id " + i + " is not present.");
			
		}
		sc.close();
	}
}
