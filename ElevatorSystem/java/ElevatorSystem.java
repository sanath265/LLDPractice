import java.util.*;

// ============================================================
// ENUMS
// ============================================================

enum Direction {
    // TODO: Define directions (UP, DOWN, IDLE)
}

enum DoorState {
    // TODO: Define door states (OPEN, CLOSED)
}

// ============================================================
// REQUEST CLASSES
// ============================================================

abstract class Request {
    protected int floor;

    // TODO: Constructor, getters
}

class ExternalRequest extends Request {
    private Direction direction;

    // TODO: Constructor (floor, direction), getters
}

class InternalRequest extends Request {
    // TODO: Constructor (destinationFloor), getters
}

// ============================================================
// ELEVATOR
// ============================================================

class Elevator {
    private int elevatorId;
    private int currentFloor;
    private Direction direction;
    private DoorState doorState;
    private int capacity;
    private int currentLoad;
    // TODO: Add request queues (upQueue, downQueue — use TreeSet or PriorityQueue)

    // TODO: Constructor
    // TODO: void addRequest(int floor);
    // TODO: void processRequests(); // move to next floor in queue
    // TODO: void moveUp();
    // TODO: void moveDown();
    // TODO: void openDoor();
    // TODO: void closeDoor();
    // TODO: boolean isIdle();
    // TODO: Getters (getCurrentFloor, getDirection, etc.)
}

// ============================================================
// ELEVATOR DISPATCH STRATEGY (Strategy Pattern)
// ============================================================

interface ElevatorDispatchStrategy {
    // TODO: Elevator selectElevator(List<Elevator> elevators, ExternalRequest request);
}

class NearestElevatorStrategy implements ElevatorDispatchStrategy {
    // TODO: Implement — select the nearest idle or same-direction elevator
}

// ============================================================
// FLOOR
// ============================================================

class Floor {
    private int floorNumber;
    // TODO: Add up/down buttons

    // TODO: Constructor
    // TODO: ExternalRequest pressUp();
    // TODO: ExternalRequest pressDown();
}

// ============================================================
// ELEVATOR CONTROLLER (Singleton)
// ============================================================

class ElevatorController {
    private static ElevatorController instance;
    private List<Elevator> elevators;
    private ElevatorDispatchStrategy strategy;

    private ElevatorController() {}

    // TODO: public static synchronized ElevatorController getInstance();
    // TODO: void addElevator(int capacity);
    // TODO: void setDispatchStrategy(ElevatorDispatchStrategy strategy);
    // TODO: void handleExternalRequest(ExternalRequest request);
    // TODO: void handleInternalRequest(int elevatorId, InternalRequest request);
    // TODO: void step(); // advance all elevators by one step
    // TODO: void displayStatus();
}

// ============================================================
// BUILDING
// ============================================================

class Building {
    private int numFloors;
    private List<Floor> floors;
    // TODO: Reference to ElevatorController

    // TODO: Constructor — create floors and elevators
    // TODO: void pressButton(int floorNumber, Direction direction);
    // TODO: void pressFloorInElevator(int elevatorId, int destinationFloor);
    // TODO: void simulate(); // run a simulation loop
}

// ============================================================
// MAIN — Test your implementation
// ============================================================

public class ElevatorSystem {
    public static void main(String[] args) {
        // TODO: Create a building with floors and elevators
        // TODO: Simulate pressing buttons on various floors
        // TODO: Display elevator status after each step

        System.out.println("=== Elevator System ===");
        System.out.println("TODO: Implement and test your design here.");
    }
}
