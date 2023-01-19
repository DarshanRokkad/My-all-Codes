package collection_framework;
import java.util.*;
public class Traversal {

	public static void main(String[] args) {
		ArrayList<String> al = new ArrayList<String>();
		al.add("C");
		al.add("C++");
		al.add("Java");
		al.add("Python");
		System.out.println(al);
		
		System.out.print("Traversing list through list iterator : ");
		Iterator it = al.iterator();
		while(it.hasNext())
		{
			System.out.print(it.next()+" ");
		}
		System.out.println();
		
		System.out.print("Traversing list through list iterator in reverse : ");
		ListIterator<String> lit = al.listIterator(al.size());
//		System.out.println(lit.hasNext());
//		System.out.println(lit.next());
//		System.out.println(lit.hasPrevious());
//		System.out.println(lit.previous());
		while(lit.hasPrevious())
		{
			System.out.print(lit.previous()+" ");
		}
		System.out.println();
		
		System.out.print("Traversing list through list using for loop : ");
		for(int i = 0 ;i<al.size();i++)
		{
			System.out.print(al.get(i)+" ");
		}
		System.out.println();
		
		System.out.print("Traversing list through list using for each loop : ");
		for(String s : al)
		{
			System.out.print(s+" ");
		}
		System.out.println();
	}
}
