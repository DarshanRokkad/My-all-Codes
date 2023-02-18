package listboxAndChoice_07;

import java.awt.*;
import java.awt.event.*;

class MyFrame extends Frame 
{
	List l ;
	Choice c ;
	TextArea ta ;
	public MyFrame()
	{
		super("ListBox and choice");
		l = new List(4,true);
		c = new Choice();
		ta = new TextArea(20,30);
		
		l.add("Monday");
		l.add("Tuesday");
		l.add("Wednesday");
		l.add("Thursday");
		l.add("Friday");
		l.add("Saturday");
		
		c.add("Jan");
		c.add("Feb");
		c.add("Mar");
		c.add("April");
		
		setLayout(new FlowLayout());
		
		add(l);
		add(c);
		add(ta);
	}
}

public class ListBoxAndChoice {
	public static void main(String args[])
	{
		MyFrame f = new MyFrame();
		f.setSize(400,600);
		f.setVisible(true);
	}
}
