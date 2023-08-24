package hostel1;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;

//import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class HostelTest {

	private Hostel hostel;

    @BeforeEach
    public void setUp() {
        hostel = new Hostel("Awesome Hostel");
    }

    @Test
    public void testAddStudent() {
        // Test adding a student to the hostel
        Student newStudent = new Student("John Doe", 20);

        hostel.addStudent(newStudent);
        List<Student> allStudents = hostel.getAllStudents();

        assertTrue(allStudents.contains(newStudent));
    }
}
