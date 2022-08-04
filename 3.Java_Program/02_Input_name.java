import java.util.Scanner;

public class input_name {
    public static void main(String[] args){
        Scanner input = new Scanner (System.in);
        
        System.out.print("Enter your first name : ");
        String firstname = input.next();

        System.out.print("Enter your last name : ");
        String lastname = input.next();

        System.out.print("Your full name is "+firstname+" "+lastname);
    }
}