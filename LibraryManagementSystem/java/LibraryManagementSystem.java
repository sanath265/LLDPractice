import java.util.*;

// ============================================================
// ENUMS
// ============================================================

enum BookStatus {
    // TODO: Define statuses (AVAILABLE, BORROWED, RESERVED, LOST)
}

// ============================================================
// BOOK & BOOK COPY
// ============================================================

class Book {
    private String isbn;
    private String title;
    private String author;
    // TODO: Add list of BookCopy

    // TODO: Constructor, getters
    // TODO: int getAvailableCopyCount();
    // TODO: BookCopy getAvailableCopy();
}

class BookCopy {
    private String copyId;
    private BookStatus status;
    // TODO: Add reference to parent Book

    // TODO: Constructor, getters, setters for status
}

// ============================================================
// USER CLASSES
// ============================================================

abstract class User {
    protected String userId;
    protected String name;
    protected String email;

    // TODO: Constructor, getters
}

class Member extends User {
    // TODO: Track borrowed books (list of BorrowRecord)
    // TODO: Track reservations
    private static final int MAX_BOOKS = 5;

    // TODO: Constructor
    // TODO: boolean canBorrow();
    // TODO: int getBorrowedBookCount();
}

class Librarian extends User {
    // TODO: Constructor
    // TODO: void addBook(Book book);
    // TODO: void removeBook(String isbn);
}

// ============================================================
// BORROW RECORD
// ============================================================

class BorrowRecord {
    // TODO: Define fields — recordId, member, bookCopy, borrowDate, dueDate, returnDate

    // TODO: Constructor, getters
    // TODO: boolean isOverdue();
    // TODO: int getOverdueDays();
}

// ============================================================
// RESERVATION
// ============================================================

class Reservation {
    // TODO: Define fields — reservationId, member, book, reservationDate

    // TODO: Constructor, getters
}

// ============================================================
// FINE CALCULATOR
// ============================================================

class FineCalculator {
    // TODO: static double calculateFine(BorrowRecord record);
    // Fine = overdueDays * ratePerDay
}

// ============================================================
// NOTIFICATION SERVICE (Observer Pattern)
// ============================================================

interface NotificationObserver {
    // TODO: void update(String message);
}

class EmailNotification implements NotificationObserver {
    // TODO: Implement update — send email notification
}

class NotificationService {
    private List<NotificationObserver> observers;

    // TODO: Constructor
    // TODO: void subscribe(NotificationObserver observer);
    // TODO: void unsubscribe(NotificationObserver observer);
    // TODO: void notifyAll(String message);
}

// ============================================================
// SEARCH STRATEGY (Strategy Pattern)
// ============================================================

interface SearchStrategy {
    // TODO: List<Book> search(List<Book> books, String query);
}

class SearchByTitle implements SearchStrategy {
    // TODO: Implement search by title
}

class SearchByAuthor implements SearchStrategy {
    // TODO: Implement search by author
}

class SearchByISBN implements SearchStrategy {
    // TODO: Implement search by ISBN
}

// ============================================================
// LIBRARY (Singleton)
// ============================================================

class Library {
    private static Library instance;
    private List<Book> books;
    private List<Member> members;
    private List<BorrowRecord> borrowRecords;

    private Library() {}

    // TODO: public static synchronized Library getInstance();
    // TODO: void addBook(String title, String author, String isbn);
    // TODO: void registerMember(String name, String email);
    // TODO: BorrowRecord borrowBook(String memberId, String isbn);
    // TODO: double returnBook(String recordId); // returns fine amount
    // TODO: void reserveBook(String memberId, String isbn);
    // TODO: List<Book> searchBooks(String query, SearchStrategy strategy);
    // TODO: List<BorrowRecord> getOverdueRecords();
}

// ============================================================
// MAIN — Test your implementation
// ============================================================

public class LibraryManagementSystem {
    public static void main(String[] args) {
        // TODO: Get Library instance
        // TODO: Add books
        // TODO: Register members
        // TODO: Borrow and return books
        // TODO: Search for books
        // TODO: Check overdue books

        System.out.println("=== Library Management System ===");
        System.out.println("TODO: Implement and test your design here.");
    }
}
