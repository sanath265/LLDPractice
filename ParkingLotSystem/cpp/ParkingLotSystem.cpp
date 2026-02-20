#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <memory>
#include <ctime>

using namespace std;

// ============================================================
// ENUMS
// ============================================================

enum class VehicleType {
    // TODO: Define vehicle types (MOTORCYCLE, CAR, TRUCK)
};

enum class SpotSize {
    // TODO: Define spot sizes (SMALL, MEDIUM, LARGE)
};

// ============================================================
// VEHICLE CLASSES
// ============================================================

class Vehicle {
protected:
    string licensePlate;
    VehicleType type;

public:
    // TODO: Constructor, getters
    // virtual SpotSize getRequiredSpotSize() = 0;
    virtual ~Vehicle() = default;
};

class Motorcycle : public Vehicle {
public:
    // TODO: Implement constructor and getRequiredSpotSize()
};

class Car : public Vehicle {
public:
    // TODO: Implement constructor and getRequiredSpotSize()
};

class Truck : public Vehicle {
public:
    // TODO: Implement constructor and getRequiredSpotSize()
};

// ============================================================
// TICKET
// ============================================================

class Ticket {
    // TODO: Define fields — ticketId, vehicle, spot, entryTime
public:
    // TODO: Constructor, getters
};

// ============================================================
// PARKING SPOT
// ============================================================

class ParkingSpot {
    int spotNumber;
    SpotSize size;
    bool occupied;
    // TODO: Add reference to parked vehicle

public:
    // TODO: Constructor
    // TODO: bool canFitVehicle(Vehicle* vehicle);
    // TODO: void parkVehicle(Vehicle* vehicle);
    // TODO: void removeVehicle();
    // TODO: Getters (isOccupied, getSize, getSpotNumber)
};

// ============================================================
// PARKING STRATEGY (Strategy Pattern)
// ============================================================

class ParkingStrategy {
public:
    // TODO: virtual ParkingSpot* findSpot(vector<ParkingSpot*>& spots, Vehicle* vehicle) = 0;
    virtual ~ParkingStrategy() = default;
};

class NearestSpotStrategy : public ParkingStrategy {
public:
    // TODO: Implement findSpot — return the nearest available spot that fits the vehicle
};

// ============================================================
// PARKING LEVEL / FLOOR
// ============================================================

class ParkingLevel {
    int levelNumber;
    vector<unique_ptr<ParkingSpot>> spots;

public:
    // TODO: Constructor — initialize spots of various sizes
    // TODO: ParkingSpot* findAvailableSpot(Vehicle* vehicle, ParkingStrategy* strategy);
    // TODO: int getAvailableSpotCount();
    // TODO: void displayStatus();
};

// ============================================================
// PARKING LOT (Singleton)
// ============================================================

class ParkingLot {
    static ParkingLot* instance;
    vector<unique_ptr<ParkingLevel>> levels;
    unordered_map<string, Ticket*> activeTickets; // ticketId -> Ticket

    // TODO: Private constructor
    ParkingLot() = default;

public:
    // TODO: static ParkingLot* getInstance();
    // TODO: void addLevel(int numSpots);
    // TODO: Ticket* parkVehicle(Vehicle* vehicle);
    // TODO: double unparkVehicle(const string& ticketId); // returns charge
    // TODO: bool isSpotAvailable(VehicleType type);
    // TODO: void displayStatus();
};

// ============================================================
// MAIN — Test your implementation
// ============================================================

int main() {
    // TODO: Get ParkingLot instance
    // TODO: Add levels with spots
    // TODO: Create vehicles and park them
    // TODO: Display parking lot status
    // TODO: Unpark vehicles and display charges

    cout << "=== Parking Lot System ===" << endl;
    cout << "TODO: Implement and test your design here." << endl;

    return 0;
}
