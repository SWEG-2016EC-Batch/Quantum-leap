# Problem Analysis for the Code

The program is a comprehensive **Library Management System** designed to manage patrons, librarians, books, and borrowing transactions. Below is the structured analysis of the problem addressed by the code.

---

## 1. Objective

The system aims to:
- Register and manage librarians and patrons.
- Handle book borrowing and returning processes.
- Manage penalties for overdue books.
- Provide administrative features like adding/deleting books and generating daily reports.

---

## 2. Inputs

### Patron and Librarian Details
- Name, sex, address, and a unique ID.
- Passwords for security and authentication.

### Book Details
- Name and ID for book identification.

### Borrowing Details
- IDs of patrons and books.
- Timestamps for borrowing and returning books.

### System Configurations
- Maximum number of books a patron can borrow (`MAX_BORROWINGS`).
- Due date for returning books (`dueDate`).
- Penalty rate for overdue books.

---

## 3. Outputs

- Success/failure messages for registration, login, and borrowing/returning actions.
- **Daily Reports**:
  - Total books borrowed.
  - Average books borrowed per patron.
  - Patrons with overdue books.
  - Penalty details for overdue books.
- Borrowing history for patrons.

---

## 4. Processes

### Registration and Login
- Librarians and patrons can register and log in with password validation.
- Password recovery is supported through security questions.

### Book Management
- Add or delete books from the library inventory.
- Track which books are borrowed or returned.

### Borrowing and Returning
- Allow patrons to borrow books (by name or ID) if within their borrowing limit.
- Record borrowing details (timestamp, book ID).
- Calculate penalties for overdue books when returned late.

### Reports and Analysis
- Generate daily reports showing borrowing activity.
- Highlight patrons with overdue books and calculate penalties.

---

## 5. Key Features

### Librarian Features
- Set borrowing limits and due dates.
- Add or remove books.
- Generate daily reports and statistics.

### Patron Features
- Borrow books (by name or ID).
- View borrowing history.
- Return books and check for penalties.
- Cancel membership if eligible.

### Security
- Multi-level authentication with password and security questions.
- Limited attempts for password entry to prevent unauthorized access.

### Penalties
- Automatically calculate penalties for overdue books based on the due date and penalty rate.

---

## 6. Constraints

- Fixed-size arrays for managing patrons, books, and borrowing records:
  - Limits the system to `MAX_PATRONS` and `MAX_BOOKS`.
- Assumes valid and unique IDs for patrons and books.
- Limited input validation for certain fields.

---

## 7. Challenges

### Scalability
- Using fixed-size arrays limits the number of patrons and books.

### Error Handling
- Minimal validation for user inputs (e.g., invalid IDs or names).

### Usability
- Complex menu navigation may confuse users.

---

## 8. Future Improvements

- Replace fixed-size arrays with dynamic structures like `std::vector`.
- Implement database integration for persistent storage of patrons, books, and transactions.
- Enhance user interface with clear prompts and error messages.
- Add advanced reporting features (e.g., borrowing trends over time).
- Support for multiple librarians managing the system concurrently.

---

## 9. Use Cases

### Librarian Workflow
- Register/login as a librarian.
- Add new books to the inventory.
- Generate daily reports.
- Review and manage overdue books and penalties.

### Patron Workflow
- Register/login as a patron.
- Borrow books (up to the maximum limit).
- Return books and check penalties for overdue returns.
- View borrowing history and cancel membership if necessary.</hr>
# Contributions
  ## Yafet Elias
  - Allow the patron to login with either their name or Id, and retrives their information based on their credentials.
  - Display a daily statistics for the Librarian to know what has been changed through the day and statistical information about the books borrowed and people registered.
  ## Yerosand Bekele
  -  Make sure the books borrowed was unique and made sure to link it with patron's information
  -  If a book is returend past its due date make sure it is penalized with the set rate.
  -  Cancel membership for any patron that wants stop using the library, if they have no debts.
  ## Yeabsira Belete
  - Check if the person has reached borrowing limit and set the limit
  - History of the patron's transactions or borrowings
  - Made the problem analysis as seen above
  ## Yonas Demise
  - Made the security system for both the Librarian and the patrons.
  - Made the flowchart as seen below.
  - Ensure the book limit was not passed
  ## Yonas Zegeye
  - Made the patron registeration system
  - Daily report for the librarian
  - Composed the Documentation for this Software which can found by this link: <em>https://docs.google.com/document/d/1d-NRArh_Hkx7EyBMDwiK9vRTveIfgKaZwCiBNomuJxM/edit?usp=sharing</em>
  ## Yoseph Asrat
  - Made the Librarian's enviroment with default passwords and settings, along with the return book feature.
  - Made the time registeration system so that the patron's time of borrowing is known and when he returns it.
  - Composing and debugging the code.
# Flowchart
```mermaid
graph TD

    A([Start]) --> B[/Show Menu/]
    B --> |0| C[/Register as Librarian/]
    C --> D[/Create password and security question/]
    D --> E[Enter details]
    B --> |1| F[/Login Librarian/]
    F --> G{Password correct?}
    G --> |Yes| H[/Librarian Section/]
    H --> I[Option to manage books and patrons]
    B --> |2| J[/Register Patron/]
    J --> K[Enter details]
    B --> |3| L[/Login Patron/]
    L --> M{Patron ID exists?}
    M --> |Yes| N[/Patron Menu/]
    N --> O[Option to borrow/return books]
    M --> |No| P[/Patron not found/]
    B --> |4| Q[/Cancel Membership/]
    B --> |5| R([Exit/End])
    G --> |No| S[/Incorrect password/]
    I --> T([End])
    O --> T
    P --> T
    S --> T
    Q --> T
    R --> T

