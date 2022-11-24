package javaprograms;
import java.util.Scanner;
// Reverse copy of an array
public class Reversecopy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number elements of the array : ");
		n = sc.nextInt();
		int arr1[]= new int[n];
		System.out.print("Enter the elements of the array : ");
		for(int i = 0 ; i<arr1.length;i++)
		{
			arr1[i]=sc.nextInt();
		}
		System.out.print("The reversed array : ");
		int arr2[]=new int[n];
		for(int i = 0 ;i<arr1.length;i++)
		{
			arr2[i] = arr1[arr1.length-1-i];
			System.out.print(arr2[i]+" ");
		}
	}

}
