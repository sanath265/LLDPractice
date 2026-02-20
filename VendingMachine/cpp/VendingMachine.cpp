#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <memory>

using namespace std;

// ============================================================
// ENUMS
// ============================================================

enum class Coin {
    // TODO: Define coin denominations (PENNY=1, NICKEL=5, DIME=10, QUARTER=25)
};

enum class Note {
    // TODO: Define note denominations (ONE=1, FIVE=5, TEN=10, TWENTY=20)
};

// ============================================================
// PRODUCT
// ============================================================

class Product {
    string name;
    string code;
    double price;

public:
    // TODO: Constructor, getters
};

// ============================================================
// INVENTORY
// ============================================================

class Inventory {
    unordered_map<string, int> stock; // productCode -> quantity

public:
    // TODO: void addProduct(const string& code, int quantity);
    // TODO: bool isAvailable(const string& code);
    // TODO: void reduceStock(const string& code);
    // TODO: int getQuantity(const string& code);
};

// ============================================================
// MONEY MANAGER
// ============================================================

class MoneyManager {
    double insertedAmount;
    // TODO: Track available change in the machine

public:
    // TODO: Constructor
    // TODO: void insertCoin(Coin coin);
    // TODO: void insertNote(Note note);
    // TODO: double getInsertedAmount();
    // TODO: void resetInsertedAmount();
    // TODO: vector<Coin> calculateChange(double changeAmount);
    // TODO: bool canMakeChange(double changeAmount);
};

// ============================================================
// VENDING MACHINE STATE (State Pattern)
// ============================================================

class VendingMachine; // Forward declaration

class VendingMachineState {
public:
    // TODO: virtual void selectProduct(VendingMachine* machine, const string& code) = 0;
    // TODO: virtual void insertMoney(VendingMachine* machine, double amount) = 0;
    // TODO: virtual void dispense(VendingMachine* machine) = 0;
    // TODO: virtual void cancel(VendingMachine* machine) = 0;
    virtual ~VendingMachineState() = default;
};

class IdleState : public VendingMachineState {
public:
    // TODO: Implement — only selectProduct should work in this state
};

class ProductSelectedState : public VendingMachineState {
public:
    // TODO: Implement — allow insertMoney and cancel
};

class MoneyInsertedState : public VendingMachineState {
public:
    // TODO: Implement — check if enough money, then dispense or ask for more
};

class DispenseState : public VendingMachineState {
public:
    // TODO: Implement — dispense product, return change, go back to idle
};

// ============================================================
// VENDING MACHINE (Singleton)
// ============================================================

class VendingMachine {
    static VendingMachine* instance;
    unique_ptr<Inventory> inventory;
    unique_ptr<MoneyManager> moneyManager;
    VendingMachineState* currentState;
    Product* selectedProduct;
    unordered_map<string, unique_ptr<Product>> products;

    VendingMachine() = default;

public:
    // TODO: static VendingMachine* getInstance();
    // TODO: void addProduct(const string& name, const string& code, double price, int qty);
    // TODO: void selectProduct(const string& code);
    // TODO: void insertMoney(double amount);
    // TODO: void dispense();
    // TODO: void cancel();
    // TODO: void setState(VendingMachineState* state);
    // TODO: Getters for inventory, moneyManager, selectedProduct
    // TODO: void displayProducts();
};

// ============================================================
// MAIN — Test your implementation
// ============================================================

int main() {
    // TODO: Get VendingMachine instance
    // TODO: Add products
    // TODO: Select a product
    // TODO: Insert money
    // TODO: Dispense
    // TODO: Try edge cases: insufficient funds, out of stock, cancel

    cout << "=== Vending Machine ===" << endl;
    cout << "TODO: Implement and test your design here." << endl;

    return 0;
}
