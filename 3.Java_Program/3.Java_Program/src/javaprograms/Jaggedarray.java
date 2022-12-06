package javaprograms;

import java.util.Scanner;
// Jagged / ragged array in java
public class Jaggedarray {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int arr[][]=new int[3][];
		arr[0]=new int[2];
		arr[1]=new int[4];
		arr[2]=new int[5];
		System.out.println("Enter the elements of the jagged array : ");
		for(int i = 0 ;i<arr.length;i++)
		{
			System.out.print("Enter the "+(i+1)+" row "+arr[i].length+" elements : ");
			for(int j = 0 ;j<arr[i].length;j++)
			{
				arr[i][j]=sc.nextInt();
			}
		}
		System.out.println("The Jagged array : ");
		for(int i = 0 ;i<arr.length;i++)
		{
			for(int j = 0 ;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
			
		}
	}	
}
