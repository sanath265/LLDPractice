import java.util.*;

// ============================================================
// ENUMS
// ============================================================

enum VehicleType {
    // TODO: Define vehicle types (MOTORCYCLE, CAR, TRUCK)
}

enum SpotSize {
    // TODO: Define spot sizes (SMALL, MEDIUM, LARGE)
}

// ============================================================
// VEHICLE CLASSES
// ============================================================

abstract class Vehicle {
    private String licensePlate;
    private VehicleType type;

    // TODO: Constructor, getters
    // TODO: abstract SpotSize getRequiredSpotSize();
}

class Motorcycle extends Vehicle {
    // TODO: Implement constructor and getRequiredSpotSize()
}

class Car extends Vehicle {
    // TODO: Implement constructor and getRequiredSpotSize()
}

class Truck extends Vehicle {
    // TODO: Implement constructor and getRequiredSpotSize()
}

// ============================================================
// TICKET
// ============================================================

class Ticket {
    // TODO: Define fields — ticketId, vehicle, spot, entryTime
    // TODO: Constructor, getters
}

// ============================================================
// PARKING SPOT
// ============================================================

class ParkingSpot {
    private int spotNumber;
    private SpotSize size;
    private boolean occupied;
    // TODO: Add reference to parked vehicle

    // TODO: Constructor
    // TODO: boolean canFitVehicle(Vehicle vehicle);
    // TODO: void parkVehicle(Vehicle vehicle);
    // TODO: void removeVehicle();
    // TODO: Getters (isOccupied, getSize, getSpotNumber)
}

// ============================================================
// PARKING STRATEGY (Strategy Pattern)
// ============================================================

interface ParkingStrategy {
    // TODO: ParkingSpot findSpot(List<ParkingSpot> spots, Vehicle vehicle);
}

class NearestSpotStrategy implements ParkingStrategy {
    // TODO: Implement findSpot — return the nearest available spot that fits the vehicle
}

// ============================================================
// PARKING LEVEL / FLOOR
// ============================================================

class ParkingLevel {
    private int levelNumber;
    private List<ParkingSpot> spots;

    // TODO: Constructor — initialize spots of various sizes
    // TODO: ParkingSpot findAvailableSpot(Vehicle vehicle, ParkingStrategy strategy);
    // TODO: int getAvailableSpotCount();
    // TODO: void displayStatus();
}

// ============================================================
// PARKING LOT (Singleton)
// ============================================================

class ParkingLot {
    private static ParkingLot instance;
    private List<ParkingLevel> levels;
    private Map<String, Ticket> activeTickets; // ticketId -> Ticket

    // TODO: Private constructor
    private ParkingLot() {}

    // TODO: public static synchronized ParkingLot getInstance();
    // TODO: void addLevel(int numSpots);
    // TODO: Ticket parkVehicle(Vehicle vehicle);
    // TODO: double unparkVehicle(String ticketId); // returns charge
    // TODO: boolean isSpotAvailable(VehicleType type);
    // TODO: void displayStatus();
}

// ============================================================
// MAIN — Test your implementation
// ============================================================

public class ParkingLotSystem {
    public static void main(String[] args) {
        // TODO: Get ParkingLot instance
        // TODO: Add levels with spots
        // TODO: Create vehicles and park them
        // TODO: Display parking lot status
        // TODO: Unpark vehicles and display charges

        System.out.println("=== Parking Lot System ===");
        System.out.println("TODO: Implement and test your design here.");
    }
}
