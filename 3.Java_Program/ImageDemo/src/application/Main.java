package application;
	
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.FlowPane;
import javafx.geometry.*;
import javafx.scene.image.*;

public class Main extends Application {
	@Override
	public void start(Stage myStage) {
		myStage.setTitle("Display an image");
		FlowPane rootNode =  new FlowPane();
		rootNode.setAlignment(Pos.CENTER);
		Scene myScene = new Scene(rootNode,1000,600);
		myStage.setScene(myScene);
		ImageView  var = new ImageView(("D:\\Wallpaper\\L 3.png"));
		Label la = new Label("Kannada",var);
		rootNode.getChildren().add(la);
		myStage.show();
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
