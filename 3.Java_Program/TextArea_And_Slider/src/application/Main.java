package application;
	
import javafx.application.Application;
import javafx.stage.*;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.geometry.*;
import javafx.scene.text.*;

import java.io.FileInputStream;
import java.util.*;

public class Main extends Application 
{	
	public void start(Stage stage) throws Exception 
	{
		TextArea ta = new TextArea();
		ta.setPrefColumnCount(100);
		ta.setPrefRowCount(20);
		
		Slider s = new Slider(0,100,0);
		s.setMajorTickUnit(5);
		s.setShowTickMarks(true);
		s.setShowTickLabels(true);
		
		s.valueProperty().addListener(e->ta.setFont(Font.font(s.getValue())));
		
		DatePicker dp = new DatePicker();
		dp.setOnAction(
				e->{
					ta.setText("Date : "+dp.getValue()+'\n'+ta.getText());
					}
				);
		
		ColorPicker cp = new ColorPicker();
		cp.setOnAction(
				e->{
					ta.setStyle("fx-text-fill:#"+cp.getValue().toString().substring(2,8));   
				}
				);
		
		Button b = new Button("Open File");
		b.setOnAction(
				e->{
					FileChooser fc = new FileChooser(); 
					java.io.File file = fc.showOpenDialog(stage);
					try(Scanner sc = new Scanner(new FileInputStream(file)))
					{
						String str = "";
						while(sc.hasNext())
						{
							str+=sc.nextLine()+'\n';
						}
						ta.setText(ta.getText()+str);
					}
					catch(Exception exp)
					{
						
					}
				}
		);
		
		VBox vb = new VBox();
		vb.getChildren().addAll(ta,s,dp,cp,b);
		vb.setAlignment(Pos.CENTER);
		vb.setPadding(new Insets(20,20,20,20));
		vb.setSpacing(40);
		
		Scene sc = new Scene(vb,1000,800);
		stage.setScene(sc);
		stage.show();
	}
	
	public static void main(String[] args) 
	{
		launch(args);
	}
}
