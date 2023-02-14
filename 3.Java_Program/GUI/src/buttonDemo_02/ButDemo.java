package buttonDemo_02;

import java.awt.*;
import java.awt.event.*;

class MyFrame extends Frame implements ActionListener
{
	Button b ;
	Label l ;
	int count = 0 ;
	MyFrame()
	{
		super("Button demo");
		b = new Button("Click");
//		to convert the integer to string we are using the spaces instead of using function to convert 
		l = new Label("   "+count);
		b.addActionListener(this);
		
		setLayout(new FlowLayout());
		add(l);
		add(b);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		count++;
		l.setText("   "+count);
	}
}

public class ButDemo {
	public static void main(String args[])
	{
		MyFrame f = new MyFrame();
		f.setSize(400,400);
		f.setVisible(true);
	}
}
