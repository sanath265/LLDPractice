#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <ctime>
#include <algorithm>

using namespace std;

// ============================================================
// ENUMS
// ============================================================

enum class BookStatus {
    // TODO: Define statuses (AVAILABLE, BORROWED, RESERVED, LOST)
};

// ============================================================
// BOOK & BOOK COPY
// ============================================================

class Book {
    string isbn;
    string title;
    string author;
    // TODO: Add list of BookCopy

public:
    // TODO: Constructor, getters
    // TODO: int getAvailableCopyCount();
    // TODO: BookCopy* getAvailableCopy();
};

class BookCopy {
    string copyId;
    BookStatus status;
    // TODO: Add reference to parent Book

public:
    // TODO: Constructor, getters, setters for status
};

// ============================================================
// USER CLASSES
// ============================================================

class User {
protected:
    string userId;
    string name;
    string email;

public:
    // TODO: Constructor, getters
    virtual ~User() = default;
};

class Member : public User {
    // TODO: Track borrowed books (list of BorrowRecord)
    // TODO: Track reservations
    static const int MAX_BOOKS = 5;

public:
    // TODO: Constructor
    // TODO: bool canBorrow();
    // TODO: int getBorrowedBookCount();
};

class Librarian : public User {
public:
    // TODO: Constructor
    // TODO: void addBook(Book* book);
    // TODO: void removeBook(const string& isbn);
};

// ============================================================
// BORROW RECORD
// ============================================================

class BorrowRecord {
    // TODO: Define fields — recordId, member, bookCopy, borrowDate, dueDate, returnDate
public:
    // TODO: Constructor, getters
    // TODO: bool isOverdue();
    // TODO: int getOverdueDays();
};

// ============================================================
// RESERVATION
// ============================================================

class Reservation {
    // TODO: Define fields — reservationId, member, book, reservationDate
public:
    // TODO: Constructor, getters
};

// ============================================================
// FINE CALCULATOR
// ============================================================

class FineCalculator {
public:
    // TODO: static double calculateFine(const BorrowRecord& record);
    // Fine = overdueDays * ratePerDay
};

// ============================================================
// NOTIFICATION SERVICE (Observer Pattern)
// ============================================================

class NotificationObserver {
public:
    // TODO: virtual void update(const string& message) = 0;
    virtual ~NotificationObserver() = default;
};

class EmailNotification : public NotificationObserver {
public:
    // TODO: Implement update — send email notification
};

class NotificationService {
    vector<NotificationObserver*> observers;

public:
    // TODO: void subscribe(NotificationObserver* observer);
    // TODO: void unsubscribe(NotificationObserver* observer);
    // TODO: void notifyAll(const string& message);
};

// ============================================================
// SEARCH STRATEGY (Strategy Pattern)
// ============================================================

class SearchStrategy {
public:
    // TODO: virtual vector<Book*> search(const vector<Book*>& books, const string& query) = 0;
    virtual ~SearchStrategy() = default;
};

class SearchByTitle : public SearchStrategy {
public:
    // TODO: Implement search by title
};

class SearchByAuthor : public SearchStrategy {
public:
    // TODO: Implement search by author
};

class SearchByISBN : public SearchStrategy {
public:
    // TODO: Implement search by ISBN
};

// ============================================================
// LIBRARY (Singleton)
// ============================================================

class Library {
    static Library* instance;
    vector<unique_ptr<Book>> books;
    vector<unique_ptr<Member>> members;
    vector<unique_ptr<BorrowRecord>> borrowRecords;

    Library() = default;

public:
    // TODO: static Library* getInstance();
    // TODO: void addBook(const string& title, const string& author, const string& isbn);
    // TODO: void registerMember(const string& name, const string& email);
    // TODO: BorrowRecord* borrowBook(const string& memberId, const string& isbn);
    // TODO: double returnBook(const string& recordId); // returns fine amount
    // TODO: void reserveBook(const string& memberId, const string& isbn);
    // TODO: vector<Book*> searchBooks(const string& query, SearchStrategy* strategy);
    // TODO: vector<BorrowRecord*> getOverdueRecords();
};

// ============================================================
// MAIN — Test your implementation
// ============================================================

int main() {
    // TODO: Get Library instance
    // TODO: Add books
    // TODO: Register members
    // TODO: Borrow and return books
    // TODO: Search for books
    // TODO: Check overdue books

    cout << "=== Library Management System ===" << endl;
    cout << "TODO: Implement and test your design here." << endl;

    return 0;
}
