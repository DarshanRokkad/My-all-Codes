package rakshitha;

class OverLoadDemo{
void test() {
	System.out.println("NO PARAMETER");
}

void test(int a) {
	System.out.println("a:"+a);
}

void test(int a,int b) {
	System.out.println("a and b");
}
double test (double a) {
	System.out.println("double a:"+a);
	return a*a;
	
}
}

public class first01 { 
	public static void main(String args[]) {
		
		OverLoadDemo obj=new OverLoadDemo();
		double result;
		
		obj.test();
		obj.test(10);
		obj.test(10,20);
		result=obj.test(123.45);
		System.out.println("result of obj.test(123.45):"+result);
		
	}
}
