#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <memory>
#include <algorithm>

using namespace std;

// ============================================================
// ENUMS
// ============================================================

enum class Direction {
    // TODO: Define directions (UP, DOWN, IDLE)
};

enum class DoorState {
    // TODO: Define door states (OPEN, CLOSED)
};

// ============================================================
// REQUEST CLASSES
// ============================================================

class Request {
protected:
    int floor;

public:
    // TODO: Constructor, getters
    virtual ~Request() = default;
};

class ExternalRequest : public Request {
    Direction direction;

public:
    // TODO: Constructor (floor, direction), getters
};

class InternalRequest : public Request {
public:
    // TODO: Constructor (destinationFloor), getters
};

// ============================================================
// ELEVATOR
// ============================================================

class Elevator {
    int elevatorId;
    int currentFloor;
    Direction direction;
    DoorState doorState;
    int capacity;
    int currentLoad;
    // TODO: Add request queues (upQueue, downQueue)

public:
    // TODO: Constructor
    // TODO: void addRequest(int floor);
    // TODO: void processRequests(); // move to next floor in queue
    // TODO: void moveUp();
    // TODO: void moveDown();
    // TODO: void openDoor();
    // TODO: void closeDoor();
    // TODO: bool isIdle();
    // TODO: Getters (getCurrentFloor, getDirection, etc.)
};

// ============================================================
// ELEVATOR DISPATCH STRATEGY (Strategy Pattern)
// ============================================================

class ElevatorDispatchStrategy {
public:
    // TODO: virtual Elevator* selectElevator(vector<Elevator*>& elevators, const ExternalRequest& request) = 0;
    virtual ~ElevatorDispatchStrategy() = default;
};

class NearestElevatorStrategy : public ElevatorDispatchStrategy {
public:
    // TODO: Implement — select the nearest idle or same-direction elevator
};

// ============================================================
// FLOOR
// ============================================================

class Floor {
    int floorNumber;
    // TODO: Add up/down buttons

public:
    // TODO: Constructor
    // TODO: ExternalRequest pressUp();
    // TODO: ExternalRequest pressDown();
};

// ============================================================
// ELEVATOR CONTROLLER (Singleton)
// ============================================================

class ElevatorController {
    static ElevatorController* instance;
    vector<unique_ptr<Elevator>> elevators;
    unique_ptr<ElevatorDispatchStrategy> strategy;

    ElevatorController() = default;

public:
    // TODO: static ElevatorController* getInstance();
    // TODO: void addElevator(int capacity);
    // TODO: void setDispatchStrategy(ElevatorDispatchStrategy* strategy);
    // TODO: void handleExternalRequest(const ExternalRequest& request);
    // TODO: void handleInternalRequest(int elevatorId, const InternalRequest& request);
    // TODO: void step(); // advance all elevators by one step
    // TODO: void displayStatus();
};

// ============================================================
// BUILDING
// ============================================================

class Building {
    int numFloors;
    vector<unique_ptr<Floor>> floors;
    // TODO: Reference to ElevatorController

public:
    // TODO: Constructor — create floors and elevators
    // TODO: void pressButton(int floorNumber, Direction direction);
    // TODO: void pressFloorInElevator(int elevatorId, int destinationFloor);
    // TODO: void simulate(); // run a simulation loop
};

// ============================================================
// MAIN — Test your implementation
// ============================================================

int main() {
    // TODO: Create a building with floors and elevators
    // TODO: Simulate pressing buttons on various floors
    // TODO: Display elevator status after each step

    cout << "=== Elevator System ===" << endl;
    cout << "TODO: Implement and test your design here." << endl;

    return 0;
}
