package application;
	
import javafx.application.*;
import javafx.stage.*;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.paint.Color;

public class Main extends Application
{
	public void start(Stage stage)
	{
		Button b = new Button("_Click here");
		b.setTextFill(Color.BLUE);
		b.setMnemonicParsing(true);
		Tooltip tp = new Tooltip("Click this button to save the file");
		b.setTooltip(tp);
//		b.setStyle("-fx-border-color:red;-fx-background-color:orange;");
		Alert a = new Alert(AlertType.INFORMATION,"Button is clicked and alert information is shown.");
		b.setOnAction(e->a.show());
		
		FlowPane fp = new FlowPane(b);
		Scene sc = new Scene(fp,400,400);
		
		stage.setScene(sc);
		stage.show();
	}
	public static void main(String[] args) 
	{
		launch(args);
	}
}
