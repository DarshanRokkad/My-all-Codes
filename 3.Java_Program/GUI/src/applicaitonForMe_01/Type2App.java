package applicaitonForMe_01;

import java.awt.*;

class MyFrame extends Frame
{
	Label l ;
	TextField tf ;
	Button b ;
	MyFrame()
	{
		super("My App");
		l = new Label("Enter your name : ");
		tf = new TextField(20);
		b = new Button("Submit");
		setLayout(new FlowLayout());
		add(l);
		add(tf);
		add(b);
	}
}


public class Type2App {
	public static void main(String args[])
	{
		MyFrame f = new MyFrame();
		f.setSize(300,300);
		f.setVisible(true);
	}
}