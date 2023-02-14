package lab_program;
import java.util.*;
public class Program_11 {
	public static void main(String args[])
	{
		ArrayList<String> list = new ArrayList<String>();
		list.add("AAA");
		list.add("BBB");
		list.add("CCC");
		list.add("DDD");
		list.add("EEE");
		System.out.println("Intial list. ");
		System.out.println(list);
		System.out.println();
		
		list.add(0,"XXX");
		System.out.println("Adding element xxx at position 1.");
		System.out.println(list);
		System.out.println();
		
		list.remove("AAA");
		System.out.println("Removing element to AAA.");
		System.out.println(list);
		System.out.println();
		
		System.out.println("Updating BBB element to AAA.");
		list.remove("BBB");
		list.add(1,"AAA");
		System.out.println(list);
	}
}
