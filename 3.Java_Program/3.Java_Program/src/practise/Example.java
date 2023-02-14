package practise ;

import java.util.Scanner;
import java.util.Random;

class RBI {
	public static double Minimum_intrest = 4; 
	public static double Minimum_balance = 1000; 
	public static double Maximum_Withdraw = 50000; 
}

class Customer {
	private String name;
	private long phone_no;
	Scanner sc = new Scanner(System.in);

	public Customer() {
		System.out.print("Enter the name of customer: ");
		name = sc.nextLine();
		System.out.print("Enter phone number: ");
		phone_no = sc.nextLong();
	}

	String getName() {
		return name;
	}

	long getPhoneNo() {
		return phone_no;
	}
}

class Account {
	private Customer cus;
	private double balance_amt;
	private long account_no;
	String bank_name;
	static String account_type;
	Scanner sc = new Scanner(System.in);
	Random rd = new Random();

	Account(Customer C, String bank_name) {
		this.cus= C;
		this.bank_name = bank_name;
		System.out.println("Enter 1 for Saving Account else Enter 2 for Current : ");
		int flag = sc.nextInt();
		if (flag == 1) {
			account_type = "Saving";
		} else if(flag ==2) {
			account_type = "Current";
		}
		System.out.println("Enter the First Deposit: ");
		double first_deposit = sc.nextDouble();
		if (first_deposit > RBI.Minimum_balance) {
			this.balance_amt = first_deposit;
			this.account_no = rd.nextLong(473947230, 1523657068);
			System.out.println("Account Created Successfully in " + bank_name);
		} else {
			System.out.println("First Deposit must be greater than Rs " + RBI.Minimum_balance + " as per RBI rules.");
			System.out.println("Account not created");
			cus = null;
		}
	}

	protected double getBalance() {
		return balance_amt;
	}

	public void getWithdraw(int amount) {
		if (amount > RBI.Maximum_Withdraw) {
			System.out.println("Voilation of RBI Rule.");
		} else if (amount <= getBalance()) {
			balance_amt -= amount;
			System.out.println(amount + " is withdrawn Successfully..");
			System.out.println("Available Balance: " + balance_amt);
		}
		else {
			System.out.println("Balance is low it is not sufficient to withdraw.");
			System.out.println("Available Balance: " + getBalance());
		}
	}

	public void printDetails() {
		if (this.cus == null) {
			System.out.println("No Account Found in the bank."+'\n');
		} else {
			System.out.println("Account details.");
			System.out.println("Name: " + cus.getName());
			System.out.println("Phone number : " + cus.getPhoneNo());
			System.out.println("Account Number: " + account_no);
			System.out.println("Balance: " + balance_amt);
			System.out.println("Account Type: " + account_type+'\n');
		}
	}
}

class SBI extends Account {
	double Minimum_intrest = 6; 

	SBI(Customer cust) {
		super(cust, "SBI");
	}

	public void printDetails() {
		super.printDetails();
	}

}

class PNB extends Account {
	double Minimum_intrest = 6;
	PNB(Customer cust) {
		super(cust, "PNB");
	}

	public void printDetails() {
		super.printDetails();
	}
}

public class Example {
	public static void main(String args[]) {
		Scanner sc2=new Scanner(System.in);
		
		Customer customer1 = new Customer();
		Account krishna = new SBI(customer1); 
		krishna.printDetails();
		
		System.out.print("Enter the Amount to be withdrawn : ");
		krishna.getWithdraw(sc2.nextInt());  
		System.out.println("After Withdrawal Printing the details of Customer 1.");
		krishna.printDetails();
		
		Customer customer2 = new Customer();
		Account balu = new PNB(customer2);
		balu.printDetails();
		sc2.close();
	}
}
