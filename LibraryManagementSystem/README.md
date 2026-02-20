# Library Management System

## Problem Statement

Design a **Library Management System** that allows librarians and members to manage books, memberships, and borrowing/returning of books.

## Requirements

1. The library has a collection of **books**. Each book can have multiple **copies**.
2. There are different user roles: **Librarian** and **Member**.
3. A member can:
   - **Search** for books by title, author, or ISBN.
   - **Borrow** a book (if a copy is available). A member can borrow up to **5 books** at a time.
   - **Return** a book.
   - **Reserve** a book if all copies are currently borrowed.
4. A librarian can:
   - **Add** new books and copies.
   - **Remove** books.
   - **View overdue** books and members who have them.
5. Borrowing rules:
   - A book can be borrowed for a maximum of **14 days**.
   - A **fine** is charged for overdue books (per day).
6. The system should send **notifications** when:
   - A reserved book becomes available.
   - A borrowed book is nearing its due date.

## Key Classes to Implement

- `Book` — Represents a book with title, author, ISBN, etc.
- `BookCopy` — Represents a physical copy of a book.
- `BookStatus` — Enum (Available, Borrowed, Reserved, Lost).
- `User` — Base class for users.
- `Member`, `Librarian` — Concrete user classes.
- `Library` — Main class managing books and members.
- `BorrowRecord` — Tracks who borrowed which book and when.
- `Reservation` — Tracks reservations.
- `FineCalculator` — Calculates fines for overdue books.
- `NotificationService` — Sends notifications (Observer pattern).
- `SearchStrategy` — Strategy for searching books.

## Design Patterns to Consider

- **Observer** — Notification system.
- **Strategy** — Search functionality.
- **Singleton** — Library instance.

## Evaluation Criteria

- Correct use of OOP principles (Encapsulation, Inheritance, Polymorphism).
- Extensibility — easy to add new user roles, search strategies, or notification channels.
- Clean separation of concerns.
- Proper use of design patterns.
