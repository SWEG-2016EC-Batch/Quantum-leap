# Quantum-leap-
Quantum leap team repo
\Yoseph Asrat Kebede 1535/16
\Yeabsira Belete Bafa 1429/16\
# Documentation for Enhanced Library Management System

## Purpose
This program is an advanced library management system designed to track patron borrowing activity with specific enhancements for managing borrow limits, due dates, and borrowing history.

---

## Features

### 1. Set Maximum Borrowings and Due Dates
- Users can configure:
  - **Maximum Borrowings (`MAX_BORROWINGS`)**: The maximum number of books a patron is allowed to borrow.
  - **Due Date (`dueDate`)**: The maximum number of days a patron can keep a borrowed book.
# Explanation of Code for Borrowing History

## Purpose
This section of the code is designed to:
1. Display a list of books borrowed by a specific patron.
2. Show the timestamps for when each book was borrowed.
3. Calculate and display the total number of books the patron has borrowed.

---

## Code Breakdown

### 1. Loop Through Borrowed Books
The loop iterates through the borrowed books for a given patron, starting from index `2`:
- `user_id[i][j]`: Represents the IDs of books borrowed by the patron.
- The loop starts at `2` since indices `0` and `1` are reserved for:
  - `user_id[i][0]`: The patron's ID.
  - `user_id[i][1]`: The count of books borrowed.
# Explanation of Code for Borrowing Limit and History Features

## Purpose
This snippet enforces borrowing limits for patrons and provides an option to view their borrowing history. It also offers a graceful exit from the system when requested.

---

## Code Breakdown

### 1. Enforce Borrowing Limit
This section checks if a patron has exceeded their borrowing limit:
- If the total borrowed books (`user_id[i][1]`) exceeds `MAX_BORROWINGS`, the system notifies the patron and restricts further borrowing.
