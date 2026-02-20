# Elevator System

## Problem Statement

Design an **Elevator System** for a building with multiple elevators serving multiple floors.

## Requirements

1. The building has **N floors** and **M elevators**.
2. Each elevator can move **up**, **down**, or be **idle**.
3. Users can:
   - Press an **external button** (up/down) on any floor to request an elevator.
   - Press an **internal button** inside the elevator to select a destination floor.
4. The system should efficiently **dispatch** the nearest suitable elevator to handle a request.
5. Each elevator has:
   - A **maximum capacity** (weight or number of people).
   - A **door** that opens and closes.
   - A **display** showing the current floor.
6. Elevator scheduling should use a reasonable algorithm (e.g., **LOOK** or **SCAN** algorithm — serve requests in the current direction before reversing).
7. The system should handle **concurrent requests** from multiple floors.

## Key Classes to Implement

- `Direction` — Enum (UP, DOWN, IDLE).
- `DoorState` — Enum (OPEN, CLOSED).
- `Request` — Represents a floor request (external or internal).
- `ExternalRequest` — Request from outside the elevator (floor + direction).
- `InternalRequest` — Request from inside the elevator (destination floor).
- `Elevator` — Represents a single elevator with state and movement logic.
- `ElevatorController` — Manages the scheduling and dispatching of elevators.
- `Floor` — Represents a floor with up/down buttons.
- `Building` — Contains floors and the elevator controller.
- `ElevatorDispatchStrategy` — Strategy to pick which elevator handles a request.

## Design Patterns to Consider

- **Strategy** — Elevator dispatch algorithm.
- **State** — Elevator states (moving up, moving down, idle).
- **Observer** — Floor display updates.
- **Singleton** — ElevatorController.

## Evaluation Criteria

- Correct use of OOP principles (Encapsulation, Inheritance, Polymorphism).
- Efficient elevator dispatching logic.
- Clean separation of concerns.
- Proper use of design patterns.
