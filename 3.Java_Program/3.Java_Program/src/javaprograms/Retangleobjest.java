package javaprograms;

class Rectangle
{
	int length ;
	int breadth;
	Rectangle(int len ,int bre)
	{
		this.length = len;
		this.breadth= bre;
	}
	int area()
	{
		return (this.length*this.breadth);
	}
}
public class Retangleobjest {
	public static void main(String[] args) {

		Rectangle r = new Rectangle(5,3);
		System.out.println("The area of rectangle having length "+r.length+" and breadth "+r.breadth+" is "+r.area());
	}

}
