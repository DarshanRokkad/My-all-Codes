package javaprograms;

public class Commandlinesum 
{
	public static void main(String arg[])
	{
		int sum = 0 ;
		for(String x:arg)
		{
			int n = Integer.parseInt(x);
			sum+=n;
		}
		System.out.println("The Sum is : "+sum);
	}
}
