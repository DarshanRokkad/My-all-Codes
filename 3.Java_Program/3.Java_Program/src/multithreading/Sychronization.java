package multithreading;

class MyData
{
	synchronized void display(String str)
	{
		for(int i = 0 ;i<str.length();i++)
		{
			System.out.print(str.charAt(i)+" ");
		}
	}
}

class Thread1 extends Thread 
{
	MyData d;
	Thread1(MyData data)
	{
		d = data ;
	}
	public void run()
	{
		d.display("Helloworld");
	}
}

class Thread2 extends Thread 
{
	MyData da;
	Thread2(MyData data)
	{
		da = data ;
	}
	public void run()
	{
		da.display("Welcome");
	}
}

public class Sychronization {
	public static void main(String args[])
	{
		MyData d = new MyData();
		Thread1 t1 = new Thread1(d);
		Thread2 t2 = new Thread2(d);
		t1.start();
		t2.start();
	}
}
