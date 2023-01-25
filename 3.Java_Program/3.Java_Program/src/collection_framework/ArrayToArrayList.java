package collection_framework;
import java.util.Arrays;
import java.util.ArrayList;

public class ArrayToArrayList {
	public static void main(String args[])
	{
		String[] a = new String[]{"darshan","aditya","amey","ankur"};
		ArrayList<String> al = new ArrayList<String>(Arrays.asList(a));
		System.out.println(al);		
	}
}