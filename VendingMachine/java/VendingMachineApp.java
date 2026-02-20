import java.util.*;

// ============================================================
// ENUMS
// ============================================================

enum Coin {
    // TODO: Define coin denominations (PENNY(1), NICKEL(5), DIME(10), QUARTER(25))
    // TODO: Add value field, constructor, getValue()
}

enum Note {
    // TODO: Define note denominations (ONE(1), FIVE(5), TEN(10), TWENTY(20))
    // TODO: Add value field, constructor, getValue()
}

// ============================================================
// PRODUCT
// ============================================================

class Product {
    private String name;
    private String code;
    private double price;

    // TODO: Constructor, getters
}

// ============================================================
// INVENTORY
// ============================================================

class Inventory {
    private Map<String, Integer> stock; // productCode -> quantity

    // TODO: Constructor
    // TODO: void addProduct(String code, int quantity);
    // TODO: boolean isAvailable(String code);
    // TODO: void reduceStock(String code);
    // TODO: int getQuantity(String code);
}

// ============================================================
// MONEY MANAGER
// ============================================================

class MoneyManager {
    private double insertedAmount;
    // TODO: Track available change in the machine

    // TODO: Constructor
    // TODO: void insertCoin(Coin coin);
    // TODO: void insertNote(Note note);
    // TODO: double getInsertedAmount();
    // TODO: void resetInsertedAmount();
    // TODO: List<Coin> calculateChange(double changeAmount);
    // TODO: boolean canMakeChange(double changeAmount);
}

// ============================================================
// VENDING MACHINE STATE (State Pattern)
// ============================================================

interface VendingMachineState {
    // TODO: void selectProduct(VendingMachine machine, String code);
    // TODO: void insertMoney(VendingMachine machine, double amount);
    // TODO: void dispense(VendingMachine machine);
    // TODO: void cancel(VendingMachine machine);
}

class IdleState implements VendingMachineState {
    // TODO: Implement — only selectProduct should work in this state
}

class ProductSelectedState implements VendingMachineState {
    // TODO: Implement — allow insertMoney and cancel
}

class MoneyInsertedState implements VendingMachineState {
    // TODO: Implement — check if enough money, then dispense or ask for more
}

class DispenseState implements VendingMachineState {
    // TODO: Implement — dispense product, return change, go back to idle
}

// ============================================================
// VENDING MACHINE (Singleton)
// ============================================================

class VendingMachine {
    private static VendingMachine instance;
    private Inventory inventory;
    private MoneyManager moneyManager;
    private VendingMachineState currentState;
    private Product selectedProduct;
    private Map<String, Product> products;

    private VendingMachine() {}

    // TODO: public static synchronized VendingMachine getInstance();
    // TODO: void addProduct(String name, String code, double price, int qty);
    // TODO: void selectProduct(String code);
    // TODO: void insertMoney(double amount);
    // TODO: void dispense();
    // TODO: void cancel();
    // TODO: void setState(VendingMachineState state);
    // TODO: Getters for inventory, moneyManager, selectedProduct
    // TODO: void displayProducts();
}

// ============================================================
// MAIN — Test your implementation
// ============================================================

public class VendingMachineApp {
    public static void main(String[] args) {
        // TODO: Get VendingMachine instance
        // TODO: Add products
        // TODO: Select a product
        // TODO: Insert money
        // TODO: Dispense
        // TODO: Try edge cases: insufficient funds, out of stock, cancel

        System.out.println("=== Vending Machine ===");
        System.out.println("TODO: Implement and test your design here.");
    }
}
