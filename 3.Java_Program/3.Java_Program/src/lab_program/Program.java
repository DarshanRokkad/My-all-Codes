package lab_program;
import java.util.Scanner;

class Account 
{
	private int Accno;
	private String name;
	private long Phone_no;
	private float balance_amount;
	public void CreateAccount()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your name : ");
		name = sc.nextLine();
		System.out.print("Enter your account number : ");
		Accno = sc.nextInt();
		System.out.print("Enter your balance amount : ");
		balance_amount = sc.nextFloat();
		System.out.print("Enter your phone number : ");
		Phone_no = sc.nextLong();
	}
	
	public void Deposit(float deposit_amount)
	{
		System.out.println(deposit_amount+" is deposited to your account.");
		balance_amount+=deposit_amount;
		System.out.println(balance_amount+" is the balance account.");		
	}
	
	public void WithDraw(float withdraw_amount)
	{
		if(withdraw_amount <= this.balance_amount)
		{
			balance_amount -= withdraw_amount ;
			System.out.println(withdraw_amount+" is withdrawn from your account.");
			System.out.println(balance_amount+" is the balance account.");
		}
		else 
		{
			System.out.println("You cannot withdraw because your balance is low "+balance_amount);
		}
	}
	
	public void printAccount()
	{
		System.out.println("Account details.");
		System.out.println("Name : "+this.name);
		System.out.println("Account number : "+Accno);
		System.out.println("Balance amount : "+balance_amount);
		System.out.println("Phone : "+Phone_no);
	}
}

public class Program {
	public static void main(String args[]) throws Exception
	{
		Scanner sc2 = new Scanner(System.in);
		
		Account krish = new Account();
		krish.CreateAccount();
		System.out.println();
		
		System.out.println("Initially account .");
		krish.printAccount();
		System.out.println();
		
		System.out.print("Enter the amount to be deposited : ");
		krish.Deposit(sc2.nextFloat());
		System.out.println();		
		
		System.out.print("Enter the amount to be withdrawn : ");
		krish.WithDraw(sc2.nextFloat());
		System.out.println();		
		
		System.out.println("Account atleast last .");
		krish.printAccount();
	}
}
