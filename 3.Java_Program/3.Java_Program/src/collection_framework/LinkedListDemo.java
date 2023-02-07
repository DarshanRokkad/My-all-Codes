package collection_framework;
import java.util.*;

public class LinkedListDemo {
	public static void main(String args[])
	{
		LinkedList<String> ll = new LinkedList<String>();
		ll.add("F");
		ll.add("B");
		ll.add("C");
		ll.add("E");
		ll.addLast("Z");
		ll.addFirst("A");
		ll.add(3,"U");
		System.out.println(ll);
		ll.remove("F");
		ll.remove(2);
		System.out.println(ll);
		
		Iterator it = ll.descendingIterator();
		while(it.hasNext())
		{
			System.out.print(it.next()+" ");
		}
	}
}
