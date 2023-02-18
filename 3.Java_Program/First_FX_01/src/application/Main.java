package application;
	
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;

public class Main extends Application {
	public void start(Stage stage) throws Exception {
		Button b = new Button("Click here");
		FlowPane fp = new FlowPane();
		fp.getChildren().add(b);
		Scene sc = new Scene(fp);
		
		stage.setScene(sc);
		stage.show();
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
