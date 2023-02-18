package textAreaDemo_06;

import java.awt.*;
import java.awt.event.*;

class MyFrame extends Frame implements ActionListener
{
	Label l;
	TextArea ta;
	TextField tf;
	Button b;

	MyFrame() 
	{
		l = new Label("NO Text entered ");
		ta = new TextArea(10, 30);
		tf = new TextField(20);
		b = new Button("Click");
		
		b.addActionListener(this);
		
		setLayout(new FlowLayout());
		
		add(ta);
		add(l);
		add(tf);
		add(b);
	}
	
	public void actionPerformed(ActionEvent e)
	{
//		l.setText(ta.getSelectedText());
//		ta.append(tf.getText());
		ta.insert(tf.getText(), ta.getCaretPosition());
	}
}

public class TextAreaDemo {
	public static void main(String[] args) {
		MyFrame f = new MyFrame();

		f.setSize(400, 400);
		f.setVisible(true);
	}
}