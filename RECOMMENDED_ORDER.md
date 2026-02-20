# Recommended Practice Order

To maximize your interview preparation and coverage of design patterns, follow this order. Each problem builds on different concepts.

## 1. Parking Lot System (The "Hello World" of LLD)
**Why Start Here?**
It is the standard LLD question. It tests if you can convert basic requirements (spots, vehicles) into a class structure without overcomplicating it.
*   **Key Concepts:** Enums, Composition vs Inheritance, simple Business Logic.
*   **Patterns:** 
    *   **Factory**: To create different Vehicle objects.
    *   **Strategy**: For `PricingStrategy` (hourly vs daily) or `ParkingStrategy` (nearest spot vs random spot).
    *   **Singleton**: For the `ParkingLot` instance.

## 2. Vending Machine (The "State Pattern" Masterclass)
**Why This Next?**
This is the **most important** problem for mastering the **State Design Pattern**. Interviews often explicitly look for this pattern here. It forces you to handle state transitions (Idle → MoneyInserted → Dispensing) cleanly.
*   **Key Concepts:** State Transitions, Handling Edge Cases (insufficient funds, out of stock).
*   **Patterns:**
    *   **State Pattern**: **Crucial** here. One class per state used to avoid massive `if-else` blocks.
    *   **Singleton**: There is usually only one Vending Machine instance.

## 3. Elevator System (Complex Logic & Concurrency)
**Why This Next?**
This is considered a "Hard" LLD problem because the core logic (Dispatching Algorithm) is tricky. It also opens discussions about concurrency/multithreading.
*   **Key Concepts:** Scheduling/Dispatching algorithms, Direction handling, Queues.
*   **Patterns:**
    *   **Strategy**: **Crucial** for `DispatchStrategy` (FCFS vs SCAN/LOOK algorithm).
    *   **State Pattern**: Elevator mechanics (MovingUp, MovingDown, Idle).
    *   **Observer**: To update floor displays when elevator moves.

## 4. Library Management System (Business Logic & Search)
**Why This Next?**
This focuses on "Enterprise" style logic: searching, user management, and fine calculations. It's less about "mechanical" states and more about data management.
*   **Key Concepts:** CRUD operations, Search filters, ID generation.
*   **Patterns:**
    *   **Observer**: **Crucial** for sending notifications (User observes Book availability).
    *   **Strategy**: For `SearchStrategy` (by Title, Author, ID).
    *   **Decorator** (Optional): Could be used for complex Fine calculations.

## 5. Snake and Ladder Game (Game Loop & Extensibility)
**Why This Last?**
Game design questions test if you can create a clean "Game Loop" and extensible entities (e.g., adding a new type of generic "Jumper" that isn't a snake or ladder).
*   **Key Concepts:** Game Loop, Turn-based logic, Randomness.
*   **Patterns:**
    *   **Strategy**: For `DiceRollStrategy` (e.g., crooked dice vs fair dice).
    *   **Factory**: To create board entities (Snakes, Ladders).
    *   **Singleton**: For the `Game` or `Board` instance.
