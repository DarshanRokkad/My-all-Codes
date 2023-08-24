package hostel2;

public class Room {
    private int roomNumber;
    private int capacity;
    private boolean isOccupied;

    public Room(int roomNumber, int capacity) {
        this.roomNumber = roomNumber;
        this.capacity = capacity;
        this.isOccupied = false;
    }

    // Getters and setters (omitted for brevity)

    public boolean isOccupied() {
        return isOccupied;
    }

    public void setOccupied(boolean occupied) {
        isOccupied = occupied;
    }
}

