package practise;

class Atms
{
	int amount ;
	boolean atm_empty = true ;
	synchronized public void set(int v)
	{
		while(atm_empty!=true)
			try { wait(); } catch(Exception e) {}
		amount = v ;
		atm_empty = false ;
		notify();
	}
	
	synchronized public int get()
	{
		while(atm_empty!=false)
			try { wait(); } catch(Exception e) {}
		int x = amount ;
		atm_empty = true ;
		notify();
		return x;
	}
}

class Banks extends Thread 
{
	Atms a ;
	Banks(Atms at){ a = at ; }
	public void run()
	{
		int times = 1 ;
		while(true) {
			a.set(times);
			System.out.println("Bank filling money : "+times+'\n');
			times++;
		}
	}
}

class Customers extends Thread 
{
	Atms a ;
	Customers(Atms at){ a = at ; }
	public void run()
	{
		while(true) {
			System.out.println("Customer is consuming money : "+a.get()+'\n');
		}
	}
}

public class Example 
{
	public static void main(String args[])
	{
		Atms atm = new Atms();
		Banks sbi = new Banks(atm);
		Customers sbiCustomer = new Customers(atm);
		sbi.start();
		sbiCustomer.start();		
	}	
}