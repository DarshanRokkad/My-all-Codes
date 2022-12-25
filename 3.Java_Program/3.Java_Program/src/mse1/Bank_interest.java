package mse1;

interface Bank
{
	float rateOfInterest(int a);
}

class SBI implements Bank
{
	
	public float rateOfInterest(int amount)
	{
		float r = (float)8.7/100*amount;
		return r;
	}
}

class PNB implements Bank 
{	
//	remember to make the implemented method as over rided method
	public float rateOfInterest(int amount)
	{
		float r =(float)6.8/100*amount;
		return r;
	}
}

public class Bank_interest {
	public static void main(String[] args) {
		int amount = 45000;
		
		Bank b = new SBI();		
		float rate = b.rateOfInterest(amount);
		System.out.println("Rate of interest in SBI for "+amount+" is "+rate);
		
		b=new PNB();
		rate = b.rateOfInterest(amount);
		System.out.println("Rate of interest in PNB for "+amount+" is "+rate);
	}
}
