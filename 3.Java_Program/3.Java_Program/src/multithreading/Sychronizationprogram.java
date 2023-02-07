package multithreading;

class MyDataa
{
	synchronized void display(String str)
	{
		for(int i = 0 ;i<str.length();i++)
		{
			System.out.print(str.charAt(i)+" ");
		}
	}
}

class Thread11 extends Thread 
{
	MyDataa d;
	Thread11(MyDataa data)
	{
		d = data ;
	}
	public void run()
	{
		d.display("Helloworld");
	}
}

class Thread22 extends Thread 
{
	MyDataa da;
	Thread22(MyDataa data)
	{
		da = data ;
	}
	public void run()
	{
		da.display("Welcome");
	}
}

public class Sychronizationprogram {
	public static void main(String args[])
	{
		MyDataa d = new MyDataa();
		Thread11 t1 = new Thread11(d);
		Thread22 t2 = new Thread22(d);
		t1.start();
		t2.start();
	}
}
