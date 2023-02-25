package application;
	
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.stage.Stage;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.event.*;

public class Main extends Application implements EventHandler<ActionEvent>
{
	Button b ;
	FlowPane fp ;
	int count = 0 ;
	public void start (Stage stage )
	{
//		Button is child 
		b = new Button("OK");	
		b.setPrefSize(100, 30);	
		b.setOnAction(this);
//		b.setOnAction(e->{count++; b.setText(count+"");});
//		FlowPane is a parent for button child 
		fp = new FlowPane(b);
		
//		Creating a scene
		Scene sc = new Scene(fp,400,400);
//		Setting scene to stage 
		stage.setScene(sc);
//		making scene visible 
		stage.show();
	}
	public void handle(ActionEvent ae)
	{
		count++;
		b.setText(count+"");
	}
	public static void main(String[] args)
	{
		launch(args);
	}
}