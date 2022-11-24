package rakshitha;

public class recursion {

	int product (int m,int n)
	{
		if (n==1)
			return m;
		else
			return (m+product (m,n-1));
	}
}

class Driver{
	public static void main(String args[]) {
		int m=5,n=3;
		recursion obj=new recursion();
		System.out.println(obj.product(m,n));
		
	}
}

