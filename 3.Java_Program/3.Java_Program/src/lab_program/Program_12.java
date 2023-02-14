package lab_program;
import java.util.*;
public class Program_12 {
	public static void main(String args[])
	{
		LinkedList<String> ll = new LinkedList<String>();
		ll.add("C");
		ll.add("Java");
		ll.add("Python");
		ll.add("C++");
		ll.add("Java Script");
		
		Iterator<String> itr = ll.iterator();		
		System.out.println("Initial linked list.");
		while(itr.hasNext())
		{
			System.out.print(itr.next()+" ");
		}
		System.out.println();
		System.out.println();
		
		ll.removeFirst();
		ll.removeLast();		
		System.out.println("Linked list after removal of first and last element.");
		itr = ll.iterator();
		while(itr.hasNext())
		{
			System.out.print(itr.next()+" ");
		}System.out.println();
	}
}
