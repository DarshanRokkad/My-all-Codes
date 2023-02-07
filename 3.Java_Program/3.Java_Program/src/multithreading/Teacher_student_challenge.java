package multithreading;
import java.util.Scanner ;

class WhiteBoard
{
	String text ;
	int no_of_student = 0 ;
	int toRead = 0 ;
	public void attendance()
	{
		no_of_student++;
	}
	
	synchronized public void write(String te)
	{
		System.out.println("Teacher is writing "+te);
		while(toRead!=0)
			try { wait(); } catch(Exception e) {}
		text = te;
		toRead = no_of_student ;
		notifyAll();
	}
	
	synchronized public String read()
	{
		while(toRead==0)
			try { wait(); } catch(Exception e) {}
		String te = text ;
		toRead--;
		if(toRead==0)
			notify();
		return te ;
	}
}

class Teacher extends Thread 
{
	WhiteBoard wb;
	String ToWrite[] = {"Java","C Programming","Python","C++ Programming","Java script","end"};
	Teacher(WhiteBoard b){ wb = b ; }
	public void run()
	{
		for(int i = 0 ;i<ToWrite.length;i++)
		{
			wb.write(ToWrite[i]);
		}
	}
}

class Student extends Thread 
{
	String name ;
	WhiteBoard wb;
	Student(WhiteBoard b,String na){ wb = b ; name = na ; wb.attendance();}
	public void run()
	{
		String text ;
		do {		
			text = wb.read();
			System.out.println(name+" reading "+text);
		}while(!text.equals("end"));
	}
}

public class Teacher_student_challenge {
	public static void main(String args[])
	{
		WhiteBoard w = new WhiteBoard();
		Teacher t = new Teacher(w);
		Student s1 = new Student(w,"Sanketh");
		Student s2 = new Student(w,"Darshan");
		Student s3 = new Student(w,"Preetham");
		
		t.start();
		
		s1.start();
		s2.start();
		s3.start();
	}
}
