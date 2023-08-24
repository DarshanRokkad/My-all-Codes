package hostel1;

import java.util.ArrayList;
import java.util.List;
public class Hostel {
	 private String name;
	    private List<Student> students;

	    public Hostel(String name) {
	        this.name = name;
	        students = new ArrayList<>();
	    }

	    public void addStudent(Student student) {
	        students.add(student);
	    }

	    public List<Student> getAllStudents() {
	        return students;
	    }
	
}
