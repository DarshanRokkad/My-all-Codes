package hostel2;

import static org.junit.jupiter.api.Assertions.*;
//import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

	public class RoomTest {
	    private Room room;

	    @BeforeEach
	    public void setUp() {
	        room = new Room(101, 4);
	    }

	    @Test
	    public void testIsOccupied() {
	        // Test if a room is initially not occupied
	        assertFalse(room.isOccupied());

	        // Test if a room is occupied after setting it as occupied
	        room.setOccupied(true);
	        assertTrue(room.isOccupied());
	    }

}
