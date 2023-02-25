package application;
	
import javafx.application.Application;
import javafx.geometry.*;
import javafx.stage.Stage;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.scene.text.*;
import javafx.scene.paint.*;
import javafx.event.*;


public class Main extends Application implements EventHandler<ActionEvent>
{
	
	Text t , t2  ;
	RadioButton r1, r2 , r3 ;
	CheckBox c1,c2,c3;
	ChoiceBox<Integer> cb ;
	public void start(Stage stage) throws Exception 
	{
		t = new Text("Darshan");
		HBox hb1 = new HBox();
		hb1.getChildren().add(t);
		hb1.setPadding(new Insets(10,10,10,100));
		
		r1 = new RadioButton("Red");
		r2 = new RadioButton("Green");
		r3 = new RadioButton("Blue");
		ToggleGroup tg = new ToggleGroup();
		r1.setToggleGroup(tg);
		r2.setToggleGroup(tg);
		r3.setToggleGroup(tg);
		HBox hb2 = new HBox();
		hb2.getChildren().addAll(r1,r2,r3);
		hb2.setSpacing(40);
		hb2.setPadding(new Insets(10,10,10,10));
		
		c1 = new CheckBox("Normal");
		c2 = new CheckBox("Bold");
		c3 = new CheckBox("Itlaic");
		HBox hb3 = new HBox();
		hb3.getChildren().addAll(c1,c2,c3);
		hb3.setSpacing(40);
		hb3.setPadding(new Insets(10,10,10,10));
		
		t2 = new Text("Size : ");
		cb = new ChoiceBox<>();
		cb.getItems().addAll(10,20,30,40,50);
		cb.setValue(10); // this 10 is the defalut value of that text 
		HBox hb4 = new HBox(t2,cb);
		hb4.setSpacing(15);
		hb4.setPadding(new Insets(10,10,10,10));
		
		VBox vb = new VBox();
		vb.getChildren().addAll(hb1,hb2,hb3,hb4);
		vb.setSpacing(20);
		vb.setPadding(new Insets(10,10,10,30));	
		
		r1.setOnAction(this);
		r2.setOnAction(this);
		r3.setOnAction(this);
		c1.setOnAction(this);
		c2.setOnAction(this);
		c3.setOnAction(this);
		cb.setOnAction(this);
		
		Scene sc = new Scene(vb,500,500);
		stage.setScene(sc);
		stage.show();
	}
	
	public void handle (ActionEvent ae)
	{
		FontWeight fw = FontWeight.NORMAL;
		FontPosture fp = FontPosture.REGULAR;
		
//		Changing color based on radio button choice 
		if(r1.isSelected())
		{
			t.setFill(Paint.valueOf("RED"));
		}
		if(r2.isSelected())
		{
			t.setFill(Paint.valueOf("GREEN"));
		}
		if(r3.isSelected())
		{
			t.setFill(Paint.valueOf("BLUE"));
		}
		
//		Change the font weight and posture of the text based on checkbox checked
		if(c1.isSelected())
		{
			
		}
		if(c2.isSelected())
		{
			fw = FontWeight.BOLD;
		}
		if(c3.isSelected())
		{
			fp = FontPosture.ITALIC;
		}
		
//		setting the font using all the choice 
		t.setFont(Font.font("Times New Roma",fw,fp,cb.getValue()));
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
