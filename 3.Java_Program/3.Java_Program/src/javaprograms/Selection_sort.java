package javaprograms;

import java.util.Scanner;

public class Selection_sort {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n ;
		
		System.out.print("Enter the number of elements in array : ");
		n=sc.nextInt();
		
		int a[]=new int[n];
		System.out.print("Enter the elements of the array : ");
		for(int i = 0 ;i<n ;i++)
		{
			a[i]=sc.nextInt();
		}
		
		System.out.print("Array before sorting : ");
		for(int i = 0 ;i<n ;i++)
		{
			System.out.print(a[i]+" ");
		}
		System.out.println();
		
//		Selection sort algorithm 
		for(int i = 0 ;i<n ;i++)
		{
			int min_index = i;
			for(int j = i+1 ;j<n ;j++)
			{
				if(a[j]<a[min_index])
				{
					min_index=j;
				}
			}
			if(min_index!=i)
			{
				int tem = a[min_index];
				a[min_index] = a[i];
				a[i] = tem;
			}
		}
		
		System.out.print("Array after sorting : ");
		for(int i = 0 ;i<n ;i++)
		{
			System.out.print(a[i]+" ");
		}
		
	}

}
