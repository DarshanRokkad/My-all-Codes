package application;
	
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.geometry.*;

public class Main extends Application {
	public static void main(String[] args) {
		launch(args);
		}
	public void start(Stage myStage) {
		myStage.setTitle("Demonstrate JavaFX Buttons and Events.");
		FlowPane rootNode = new FlowPane(10, 10);
		rootNode.setAlignment(Pos.CENTER);
		Scene myScene = new Scene(rootNode, 300, 100);
		myStage.setScene(myScene);
	    TextField num1 = new TextField("Number 1");
	    TextField num2 = new TextField("Number 2");
	    TextField result = new TextField("Result");
	    Button btn = new Button("Sum");
	    rootNode.setAlignment(Pos.CENTER);
	    btn.setOnAction(e -> {
	    int sum = Integer.parseInt(num1.getText())+Integer.parseInt(num2.getText());
	    result.setText(String.valueOf(sum));
	});
	rootNode.getChildren().addAll(num1, num2, result,btn);
	myStage.show();
	}
}
