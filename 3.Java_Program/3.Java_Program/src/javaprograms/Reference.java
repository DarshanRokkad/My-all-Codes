package javaprograms;

class Box
{
	double width ;
	double height ;
	double depth;
	
	void setdata(double w , double h , double d)
	{
		width = w;
		height = h ;
		depth = d;
	}
	
	double volume()
	{
		return width*depth*height;
	}
	void v()
	{
		System.out.println("The voulme of the box is "+volume());
	}
}

public class Reference {
	public static void main(String args[])
	{
		Box mybox1 = new Box();
		Box mybox2 = new Box();
		Box mybox3 = mybox2;
		
//		mybox1.width=10;
//		mybox1.height=20;
//		mybox1.depth=15;
		mybox1.setdata(10,20,15);
		
		mybox2.width = 3;
		mybox2.height = 5 ;
		mybox2.depth = 7;
		
		double volume  = mybox1.width * mybox1.height * mybox1.depth;
		System.out.println("The volume is "+volume);
		
		volume  = mybox2.width * mybox2.height * mybox2.depth;
		System.out.println("The volume is "+volume);
		
		System.out.println("The box 3 width is "+mybox3.width);
		
		double vo = mybox1.volume();
		System.out.println("The volume is "+vo);
		mybox1.v();
		
	}
}
