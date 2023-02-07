package collection_framework;
import java.util.*;

public class LinkedList_Queue {
	public static void main(String args[])
	{
		Queue<String> q = new LinkedList<>();
		q.add("Pyhton");
		q.add("Java");
		q.add("C");
		System.out.println("linked list : "+q);
		String a = q.peek();
		System.out.println("Accessed element : "+a);
		
		String b = q.remove();
		System.out.println("Removed : "+b);
		
		System.out.println(q);
		q.add("c++");
		
		System.out.println(q);
		q.remove();
		System.out.println(q);
	}
}
