package lab_program;

import java.util.Scanner;
import java.util.Random;

class RBI {
	public static final double MIN_INTEREST = 4; // in percentage(4%)
	public static final double MIN_BALANCE = 1000; // minimum balance to create account
	public static final double MAX_WITHDRAW = 50000; // maximum withdrawal limit

}

class Customer {
	private String name;
	private long phone_no;
	Scanner sc = new Scanner(System.in);

	public Customer() {
		System.out.print("Enter the name of customer: ");
		this.name = sc.nextLine();
		System.out.print("Enter PhoneNo.: ");
		this.phone_no = sc.nextLong();
	}

	String getName() {
		return this.name;
	}

	long getPhoneNo() {
		return this.phone_no;
	}

}

class Account {
	private Customer customer;
	private double balance_amt;
	private long account_no;
	String bank_name;
	static String account_type;
	Scanner sc = new Scanner(System.in);
	Random rd = new Random();

	Account(Customer C, String bank_name) {
		this.customer = C;
		this.bank_name = bank_name;
		System.out.println("Enter 1 for Saving Account");
		int flag = sc.nextInt();
		if (flag == 1) {
			account_type = "Saving";
		} else {
			account_type = "Current";
		}
		System.out.println("Enter the First Deposit: ");
		double first_deposit = sc.nextDouble();
		if (first_deposit > RBI.MIN_BALANCE) {
			this.balance_amt = first_deposit;
			this.account_no = rd.nextLong(234567000, 869540000);
			System.out.println("Account Created Successfully in " + bank_name);
			System.out.println("------------------------------------");
		} else {
			System.out.println("First Deposit must be greater than Rs " + RBI.MIN_BALANCE + " as per RBI");
			System.out.println("Account not created");
			System.out.println("------------------------------------");
			customer = null;
		}
	}

	protected double getBalance() {
		return balance_amt;
	}

	public void getWithdraw(int amount) {
		if (amount > RBI.MAX_WITHDRAW) {
			System.out.println("Can't Withdraw as per RBI Rule");
		} else if (amount <= getBalance()) {
			balance_amt -= amount;
			System.out.println(amount + " is withdrawn Successfully!");
			System.out.println("Available Balance: " + balance_amt);
			System.out.println("------------------------------------");
		}
		else {
			System.out.println("Insufficient Balance!");
			System.out.println("Available Balance: " + getBalance());
			System.out.println("------------------------------------");
		}
	}

	public void printDetails() {
		if (this.customer == null) {
			System.out.println("No Account Found!");
			System.out.println("------------------------------------");
		} else {
			System.out.println("Account Holder Name: " + customer.getName());
			System.out.println("Account Holder PhoneNo.: " + customer.getPhoneNo());
			System.out.println("Account Number: " + account_no);
			System.out.println("Account Balance: " + balance_amt);
			System.out.println("Account Type: " + account_type);
			System.out.println("------------------------------------");
		}
	}
}

class SBI extends Account {
	static final double MIN_INTEREST = 6; // only for saving account

	SBI(Customer c) {
		super(c, "SBI");
	}

	public void printDetails() {
		super.printDetails();
	}

}

class PNB extends Account {
	static final double MIN_INTEREST = 6; // only for saving account

	PNB(Customer c) {
		super(c, "PNB");
	}

	public void printDetails() {
		super.printDetails();
	}

}

public class Program_2 {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		Customer c1 = new Customer();
		Account user1 = new SBI(c1); //dynamic Polymorphism(making reference of Account)
		user1.printDetails();
		System.out.print("Enter Withdraw Amount: ");
		user1.getWithdraw(sc.nextInt());  //Calling withdraw Method
		//After Withdrawal printing details of user1
		System.out.println("\t\tAfter Withdrawal Printing the details of User1");
		user1.printDetails();
		Customer c2 = new Customer();
		Account user2 = new PNB(c2);
		user2.printDetails();
		sc.close();
	}
}