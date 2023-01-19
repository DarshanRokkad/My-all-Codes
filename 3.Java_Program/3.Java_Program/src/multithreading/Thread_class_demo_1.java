package multithreading;

// Here we are creating over own class which extends thread class and can create thread and run thread 
class MyThread extends Thread
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
}

public class Thread_class_demo_1 {
	public static void main(String args[])
	{
		MyThread t = new MyThread();
		t.start();
		int j = 1 ;
		while(true)
		{
			System.out.println(j+" World");
			j++;
		}		
	}
}
