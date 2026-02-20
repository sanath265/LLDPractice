# Parking Lot System

## Problem Statement

Design a **Parking Lot System** that can manage vehicles parking in a multi-level parking lot.

## Requirements

1. The parking lot has multiple **levels**, each level has multiple **parking spots**.
2. There are different types of parking spots: **Small**, **Medium**, **Large**.
3. There are different types of vehicles: **Motorcycle**, **Car**, **Truck**.
   - A motorcycle can park in any spot.
   - A car can park in Medium or Large spots.
   - A truck can park only in Large spots.
4. The system should be able to:
   - **Park** a vehicle — assign it a spot and return a ticket.
   - **Unpark** a vehicle — free the spot given a ticket.
   - **Check availability** — check if spots are available for a given vehicle type.
   - **Display** the current status of the parking lot (occupied/available per level).
5. Parking charges are calculated based on:
   - Vehicle type.
   - Duration of parking (hourly rate).
6. The system should support multiple **entry and exit points**.

## Key Classes to Implement

- `VehicleType` — Enum for vehicle types.
- `SpotType` / `SpotSize` — Enum for spot sizes.
- `Vehicle` — Base class for vehicles.
- `Motorcycle`, `Car`, `Truck` — Concrete vehicle classes.
- `ParkingSpot` — Represents a single parking spot.
- `ParkingLevel` / `ParkingFloor` — Represents a level in the parking lot.
- `ParkingLot` — Main class managing the entire lot (Singleton).
- `Ticket` — Issued when a vehicle is parked.
- `ParkingStrategy` — Strategy to find an available spot (e.g., nearest to entry).

## Design Patterns to Consider

- **Singleton** — ParkingLot instance.
- **Strategy** — Spot allocation strategy.
- **Factory** — Vehicle creation.

## Evaluation Criteria

- Correct use of OOP principles (Encapsulation, Inheritance, Polymorphism).
- Extensibility — easy to add new vehicle types or spot types.
- Clean separation of concerns.
- Proper use of design patterns.
