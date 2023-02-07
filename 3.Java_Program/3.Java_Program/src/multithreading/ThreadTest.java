package multithreading;

class MyThread1 extends Thread 
{
	public MyThread1(String name)
	{
		super(name);
	}
	public void run()
	{
		int c = 0 ;
		while(true)
		{
			System.out.println((c++)+" user thread");
//			try {
//				Thread.sleep(100);
//			}
//			catch(InterruptedException e)
//			{
//				System.out.println(e);
//			}
		}
	}
}

public class ThreadTest {

	public static void main(String args[]) throws Exception
	{
		MyThread1 m = new MyThread1("My thread 1");
//		System.out.println(m);
//		System.out.println("Name : "+m.getName());
//		System.out.println("Priority : "+m.getPriority());
//		System.out.println("Id : "+m.getId());
//		m.start();
//		System.out.println("State : "+m.getState());
//		System.out.println("Is alive : "+m.isAlive());
		
//		m.setDaemon(true);
//		m.start();
//		Thread mainThread = Thread.currentThread();
//		mainThread.join();
		
		m.start();
		int c = 0 ;
		while(true)
		{
			System.out.println((c++)+" main thread");
		}
	}
}
