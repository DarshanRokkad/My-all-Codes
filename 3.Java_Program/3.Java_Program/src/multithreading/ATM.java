package multithreading;

class atms 
{
	synchronized void checkBalance(String name)
	{
		System.out.println(name+" checking balance.");
		try { Thread.sleep(100);} catch(InterruptedException e) {}
		System.out.println("Balance of "+name+'\n');
	}
	synchronized void withdram(String name, int amount)
	{
		System.out.println(name+" withdrawing .");
		try { Thread.sleep(100);} catch(InterruptedException e) {}
		System.out.println(name+" has Withdrawn "+amount+'\n');
	}
}

class Customer extends Thread
{
	atms a ;
	String name ;
	int amount ;
	Customer(String n , int am , atms b )
	{
		name =  n;
		amount = am ;
		a = b ;
	}
	void useAtm()
	{
		a.checkBalance(name);
		a.withdram(name, amount);
	}
	public void run()
	{
		useAtm();
	}
}

public class ATM {
	public static void main(String args [])
	{
		atms c = new atms() ;
		Customer c1 = new Customer("Amogha",29129,c);
		Customer c2 = new Customer("Kali",408534,c);
		c1.start();
		c2.start();
	}
}
