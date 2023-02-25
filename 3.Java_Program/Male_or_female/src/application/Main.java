package application;
	
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.event.*;
import javafx.geometry.Pos;


public class Main extends Application implements EventHandler<ActionEvent>
{
	@Override
	public void start(Stage stage)
	{
		stage.setTitle("Radio button demo");
		
		RadioButton rb1 = new RadioButton("Male");
		RadioButton rb2 = new RadioButton("Female");
		Label l = new Label("Male /  Female");
		
		ToggleGroup tg = new ToggleGroup();
		rb1.setToggleGroup(tg);
		rb2.setToggleGroup(tg);
		
		rb1.setOnAction(
				ae->{
					if(rb1.isSelected())			
						l.setText("Selected Male");
				}
				);
		rb2.setOnAction(
				ae->{
					if(rb2.isSelected())			
						l.setText("Selected Female");
			}
			);
		
		HBox h1 = new HBox();
		HBox h2 = new HBox();
		h1.setSpacing(20);
		h1.setAlignment(Pos.CENTER);
		h2.setAlignment(Pos.CENTER);
		h1.getChildren().addAll(rb1,rb2);
		h2.getChildren().addAll(l);
		VBox hv1 = new VBox(h1,h2);
		hv1.setSpacing(20);
		
		FlowPane fp = new FlowPane();
		fp.getChildren().add(hv1);
		fp.setAlignment(Pos.CENTER);
		fp.setHgap(20);
		
		Scene sc = new Scene(fp,400,400);
		stage.setScene(sc);
		stage.show();
	}
	public void handle(ActionEvent ae) {}
	
	public static void main(String[] args) {
		launch(args);
	}
}
