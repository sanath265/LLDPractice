# Vending Machine

## Problem Statement

Design a **Vending Machine** that dispenses products after accepting payment.

## Requirements

1. The vending machine holds multiple **products** (e.g., Coke, Pepsi, Chips, Candy), each with a **price** and **quantity**.
2. The machine accepts **coins** and **notes** of specific denominations.
3. User workflow:
   - **Select** a product.
   - **Insert** money (can insert multiple coins/notes).
   - Machine **validates** if enough money is inserted.
   - Machine **dispenses** the product and returns **change**.
4. The machine should handle:
   - **Insufficient funds** — prompt user to insert more money or cancel.
   - **Out of stock** — notify user and allow selecting a different product.
   - **No change available** — notify user.
   - **Cancellation** — refund all inserted money.
5. Admin operations:
   - **Restock** products.
   - **Collect** money from the machine.
   - **Reset** the machine.

## Key Classes to Implement

- `Product` — Represents a product with name, price, code.
- `Inventory` — Manages product stock.
- `Coin` / `Note` — Enum for currency denominations.
- `MoneyManager` — Tracks inserted money and calculates change.
- `VendingMachine` — Main class tying everything together.
- `VendingMachineState` — Interface for state pattern.
- `IdleState` — Machine waiting for user interaction.
- `ProductSelectedState` — User has selected a product.
- `MoneyInsertedState` — User is inserting money.
- `DispenseState` — Machine is dispensing product.

## Design Patterns to Consider

- **State** — Machine states (Idle, HasMoney, Dispensing, etc.).
- **Singleton** — VendingMachine instance.
- **Factory** — Creating products.

## Evaluation Criteria

- Correct use of OOP principles (Encapsulation, Inheritance, Polymorphism).
- Clean state transitions with no invalid states.
- Extensibility — easy to add new products or payment methods.
- Proper use of design patterns.
