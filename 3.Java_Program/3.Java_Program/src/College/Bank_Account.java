package College;

import java.util.Scanner;
class Account
{
	int account_no;
	String name;
	int phone_no;
	double balance_am;
	Scanner sc = new Scanner(System.in);
	void CreateAccount()
	{
		System.out.println("*****Creating account*****");
		System.out.print("Enter your account number : ");
		account_no = sc.nextInt();
		System.out.print("Enter your name : ");
		name = sc.next();
		System.out.print("Enter your phone number : ");
		phone_no = sc.nextInt();
		System.out.print("Enter your intial balance amount : ");
		balance_am = sc.nextDouble();
	}
	void deposit()
	{
		System.out.println("****Deposit amount ****");
		double deposit_amo ;
		System.out.print("Enter amount you need to deposit : ");
		deposit_amo = sc.nextDouble();
		balance_am += deposit_amo;
		PrintAccount();
	}
	void withdraw()
	{
		System.out.println("****Withdram amount ****");
		double withdram_amo ;
		System.out.print("Enter amount you need to withdraw : ");
		withdram_amo = sc.nextDouble();
		balance_am -= withdram_amo;
		PrintAccount();
	}
	void PrintAccount()
	{
		System.out.println("******Account details******");
		System.out.println("Account number : "+account_no);
		System.out.println("Name : "+name);
		System.out.println("Phone number  : "+phone_no);
		System.out.println("Balance amount : "+balance_am);
	}
}

public class Bank_Account {
	public static void main(String args[])
	{
		Account aaa = new Account();
		aaa.CreateAccount();
		aaa.deposit();
		aaa.withdraw();
		aaa.PrintAccount();
	}
}
