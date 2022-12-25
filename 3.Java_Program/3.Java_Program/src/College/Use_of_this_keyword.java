package College;

public class Use_of_this_keyword {
	int a ;
	void intialize(int a) 
	{
		this.a = a ;
	}
	public static void main(String[] args) {
		Use_of_this_keyword u = new Use_of_this_keyword();
		u.intialize(56);
		System.out.println("value of a : "+u.a);

	}
}
