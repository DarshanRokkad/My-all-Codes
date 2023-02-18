package textFieldDemo_05;

import java.awt.*;
import java.awt.event.*;

class MyFrame extends Frame implements ActionListener , TextListener
{
	Label l1 , l2 ;
	TextField tf ;
	MyFrame()
	{
		super("Text feild demo");
		l1 = new Label("No text is entered yet.");
		l2 = new Label("Enter key is not yet pressed.");
		tf = new TextField(20);
		
		tf.setEchoChar('*');
		tf.addActionListener(this);
		tf.addTextListener(this);
		
		setLayout(new FlowLayout());
		add(l1);
		add(tf);
		add(l2);
	}
	
	public void textValueChanged(TextEvent te)
	{
		l1.setText(tf.getText());
	}
	
	public void actionPerformed(ActionEvent ae)
	{
		l2.setText(tf.getText());
	}
}

public class TextFeildDemo {
	public static void main(String args[])
	{
		MyFrame f = new MyFrame();
		f.setSize(400,400);
		f.setVisible(true);
	}
}
