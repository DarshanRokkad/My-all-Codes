module First_FX_01 {
	requires javafx.controls;
	
	opens application to javafx.graphics, javafx.fxml;
}
