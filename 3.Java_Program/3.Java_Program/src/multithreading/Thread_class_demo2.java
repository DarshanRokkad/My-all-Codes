package multithreading;

//Here a single class is extending thread class and overriding run method to start thread
public class Thread_class_demo2 extends Thread
{
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
		Thread_class_demo2 t = new Thread_class_demo2();
		t.start();
		int j = 1 ;
		while(true)
		{
			System.out.println(j+" World");
			j++;
		}		
	}
	
}
