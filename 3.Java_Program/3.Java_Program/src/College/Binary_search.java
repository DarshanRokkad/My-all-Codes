package College;
import java.util.Scanner;

public class Binary_search {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n ;
		System.out.print("Enter number of elements in array : ");
		n = sc.nextInt();
		int arr[]=new int[n];
		System.out.print("Enter the elements of array in sorted order : ");
		for(int i = 0 ;i<n ;i++)
		{
			arr[i]=sc.nextInt();
		}
		int data ;
		System.out.print("Enter the data to be searched : ");
		data = sc.nextInt();
		int start = 0 , end = n-1 ;
		while(start<=end)
		{
			int mid = (start+end)/2;
			if(data<arr[mid])
			{
				end = mid - 1 ;
			}
			else if(data>arr[mid])
			{
				start = mid+1; 
			}
			else 
			{
				System.out.print(data+" is present at "+mid+" index.");
				break;
			}
		}
		if(start>end)
		{
			System.out.println(data+" is not present in the array.");
		}
	}

}
