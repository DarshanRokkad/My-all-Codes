package collection_framework;
import java.util.*;

public class Hashset2demo {
	public static void main(String args[])
	{
		HashSet<String> h = new HashSet<>();
		h.add("aaa");
		h.add("ggg");
		h.add("Bye");
//		System.out.println(h);
		Iterator<String> i = h.iterator();
		while(i.hasNext())
		{
			System.out.println(i.next());
		}
		HashSet<String> h2 = new HashSet<>();
		h2.add("aaa");
		h2.add("bbb");
		h2.add("ccc");
		i = h2.iterator();
		while(i.hasNext())
		{
			System.out.println(i.next());
		}
		h.addAll(h2);
		System.out.println(h);
		h.remove(h2);
		System.out.println(h);
	}
}
