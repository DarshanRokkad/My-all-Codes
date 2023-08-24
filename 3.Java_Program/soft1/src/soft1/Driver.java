package soft1;

public class Driver {
    private String name;
    private int age;

    // Constructor, getters, and setters omitted for brevity

    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    
    public boolean isEligibleToDrive() {
        return age >= 18;
    }
}
