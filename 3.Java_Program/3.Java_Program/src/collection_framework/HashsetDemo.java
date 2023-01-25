package collection_framework;
import java.util.*;

public class HashsetDemo {

	public static void main(String[] args) {
		HashSet<String> h = new HashSet<>();
		h.add("Two");
		h.add("One");
		h.add("Three");
		h.add("Three");
		Iterator<String> i = h.iterator();
		while(i.hasNext())
		{
			System.out.println(i.next());
		}
	}

}
