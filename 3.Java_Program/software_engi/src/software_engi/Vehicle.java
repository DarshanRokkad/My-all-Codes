package software_engi;

public class Vehicle {
	  private String registrationNumber;
	    private String make;
	    private String model;

	    // Constructor, getters, and setters omitted for brevity

	    public void setRegistrationNumber(String registrationNumber) {
	        this.registrationNumber = registrationNumber;
	    }
	    public void setMake(String make) {
	        this.make = make;
	    }
	    public void setModel(String model) {
	        this.model = model;
	    }
	    public boolean isRegistered() {
	        return registrationNumber != null && !registrationNumber.isEmpty();
	    }

	    public String getMakeAndModel() {
	        return make + " " + model;
	    }
	
}
