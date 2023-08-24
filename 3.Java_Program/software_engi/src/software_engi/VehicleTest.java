package software_engi;

import static org.junit.jupiter.api.Assertions.*;

//import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class VehicleTest {
    private Vehicle vehicle;

    @BeforeEach
    public void setUp() {
        // This method will be executed before each test method
        vehicle = new Vehicle();
        vehicle.setRegistrationNumber("ABC123");
        vehicle.setMake("Toyota");
        vehicle.setModel("Camry");
    }

    @Test
    public void testIsRegistered() {
        // Test if a vehicle is registered
        assertTrue(vehicle.isRegistered());
    }

    @Test
    public void testIsNotRegistered() {
        // Test if a vehicle is not registered
        vehicle.setRegistrationNumber(null);
        assertFalse(vehicle.isRegistered());
    }

    @Test
    public void testGetMakeAndModel() {
        // Test the getMakeAndModel method
        assertEquals("Toyota Camry", vehicle.getMakeAndModel());
    }
}