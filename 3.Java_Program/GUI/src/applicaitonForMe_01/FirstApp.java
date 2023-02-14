package applicaitonForMe_01;
import java.awt.*;

public class FirstApp {
	public static void main(String args[])
	{
		Frame f = new Frame("My first app");
		f.setLayout(new FlowLayout());
		
		
		Button b = new Button("Done");
		Label l = new Label("Did you complete Java?..");
		TextField t = new TextField(20);
		f.add(l);
		f.add(t);
		f.add(b);
		
		f.setSize(600,600);
		f.setVisible(true);
	}
}
