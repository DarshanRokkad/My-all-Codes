package javaprograms;
import java.util.Scanner;
public class Website {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String website_name;
		System.out.print("Enter the website name : ");
		website_name = sc.nextLine();
		String inti = website_name.substring(0,website_name.indexOf("//"));
		System.out.println("Your website is "+inti);
		String last = website_name.substring(website_name.lastIndexOf(".")+1);
		System.out.println("Your last extension is "+last);
	}

}
