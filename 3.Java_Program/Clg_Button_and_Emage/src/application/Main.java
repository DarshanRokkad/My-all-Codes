package application;
	
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.*;
import javafx.event.*;
import javafx.geometry.*;
import javafx.scene.control.*;
import javafx.scene.image.*;


public class Main extends Application implements EventHandler<ActionEvent>
{
	Label l ;
	public void start(Stage stage) throws Exception
	{
		stage.setTitle("Image and Button demo Event handling.");
		FlowPane fp = new FlowPane();
		fp.setAlignment(Pos.CENTER);
		
		Button b1 = new Button("Button 1",new ImageView("D:\\Wallpaper\\image1.png"));
		Button b2 = new Button("Button 2",new ImageView("D:\\Wallpaper\\image2.png"));
		b1.setContentDisplay(ContentDisplay.TOP);
		b2.setContentDisplay(ContentDisplay.TOP);
		l = new Label("Push a button");
		b1.setOnAction(
				ae->{l.setText("Button 1 is pressed.");				
				}
				);
		b2.setOnAction(
				ae-> {l.setText("Button 2 is pressed.");				
				}
				);
		b1.setPadding(new Insets(10,10,10,10));
		b2.setPadding(new Insets(10,10,10,10));
		l.setPadding(new Insets(10,10,10,10));		
		
		HBox hb1 = new HBox(b1,b2);
		hb1.setAlignment(Pos.CENTER);
		hb1.setSpacing(30);		
		HBox hb3 = new HBox(l);
		hb3.setAlignment(Pos.CENTER);
		hb3.setSpacing(30);
		
		Label l2 = new Label("Button is not Clicked.");
		ToggleButton tb =new ToggleButton("ON / OFF");
		tb.setOnAction(
				ae->{
					if(tb.isSelected())
						l2.setText("ON");
					else 
						l2.setText("OFF");
				}
				);
		HBox hb2 = new HBox(tb,l2);
		hb2.setAlignment(Pos.CENTER);
		hb2.setSpacing(20);
		
		VBox vb = new VBox(hb1,hb3,hb2);
		fp.getChildren().addAll(vb);
		
		vb.setSpacing(30);
		
		Scene sc = new Scene(fp,900,600);
		stage.setScene(sc);
		stage.show();
	}
	
	public static void main(String[] args)
	{
		launch(args);
	}

	public void handle(ActionEvent arg0) {
		
	}
}
