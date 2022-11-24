package javaprograms;
import java.util.Scanner;

public class Secondlargest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n;
		System.out.println("Enter the number of elements of the array : ");
		Scanner sc = new Scanner(System.in);
		n=sc.nextInt();
		int arr[] = new int[n];
		System.out.println("Enter the elements of the array : ");
		for (int i =0 ;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("The elements of the array : ");
		for (int i =0 ;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		int max1 = arr[0] , max2 = arr[0];
		for (int i =0 ;i<n;i++)
		{
			if(arr[i]>max1)
			{y
				max1=arr[i];
			}
		}
		System.out.println();
		System.out.println("Second largest element "+max2);
		
	}

}
