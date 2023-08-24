package soft1;

import static org.junit.jupiter.api.Assertions.*;

//import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class DriverTest {

	private Driver driver;

    @BeforeEach
    public void setUp() {
        driver = new Driver();
        driver.setName("John Doe");
        driver.setAge(25);
    }

    @Test
    public void testIsEligibleToDrive() {
        // Test if a driver is eligible to drive
        assertTrue(driver.isEligibleToDrive());
    }

    @Test
    public void testIsNotEligibleToDrive() {
        // Test if a driver is not eligible to drive
        driver.setAge(16);
        assertFalse(driver.isEligibleToDrive());
    }
}
