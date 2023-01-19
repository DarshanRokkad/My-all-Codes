package multithreading;

public class Runnable_interface_demo_2 implements Runnable{
	public void run()
	{
		int i = 1 ;
		while(true)
		{
			System.out.println(i+" Hello");
			i++;
		}
	}
	
	public static void main(String args[])
	{
		Runnable_interface_demo_2 m = new Runnable_interface_demo_2();
		Thread t = new Thread(m);
		t.start();
		int j = 1 ;
		while(true)
		{
			System.out.println(j+" World");
			j++;
		}
	}
}
