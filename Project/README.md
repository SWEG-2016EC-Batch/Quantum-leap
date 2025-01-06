# Yeabsira Belete 1429/16 Documentation for Enhanced Library Management System

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
<h1>Fundamentals of Programming Project</h1>
<h2>Library Management System</h2>
This is a folder that contains our code for the Library Management system.
<h3>Probelm analysis</h3>
<h4>input : </h4><p>choice,name,sex,address</p>
<h4>output:</h4><p>user_address,user_sex,user_name,user_id</p>
<h4>operation:</h4><p>
  <b> declare and initialize a variable errorCounter to 0.<b>
  <b>declare a variable name,sex,address,MAX_PATRONS,totalPatrons and initialize total patron to 0
  <b>read the inputs: choice,name,sex,address,user_address,user_sex,user_name,user_id </b>
    
  check if user choice is > 5 or < 1 or invalid input(non numeral character) 
      check if errorCounter greaterthan maximumErrorAttempt
      then  exit
      else go to menu  

## **Yerosan's Penalty system Documentation**

## **Overview**  
This section of the program calculates overdue penalties for borrowed books, displays the number of borrowed books, and informs patrons if their borrowing actions are overdue.

---

## **How It Works**

### 1. **Display Patron Information**
- The program displays the **Patron ID** and the **number of days since their last borrowing action**.

### 2. **Overdue Check**
- The program compares the number of days since the borrowing action (`daysDifference`) with the library's allowed due date (`dueDate`).

#### **If the action is overdue:**
- A message indicates the book is overdue:
    ```text
    -> Action is more than 10 days old for book with ID: [Book ID]
    ```
- The overdue penalty is calculated:
    \[
    \text{Penalty} = (\text{daysDifference} - \text{dueDate}) \times \text{penaltyRate}
    \]
- The overdue days are displayed:
    ```text
    Number of days overdue: [Days Overdue]
    ```
- The total penalty amount is shown:
    ```text
    Penalty: [Total Penalty] birr
    ```

### **If the action is within the due date:**
- A message confirms that no penalty is applied:
    ```text
    -> Action is within 10 days for all books.
    ```

---

### 3. **Display Borrowed Books Count**
- The program displays the number of books currently borrowed by the patron:
    ```text
    You have borrowed [Number of Borrowed Books] books.
    ```


  if the choice option for library login  is 4 display user_address,user_sex,user_name,user_id with their respective position in the array
  if choice is 2  
  check if 


  
  </p>
_______________________________________________________________________________________________________________________________________________________________
### Yafet's
### Documentation for the Book Inventory System


---

## 1. Patron Information Retrieval

The system allows the librarian to retrieve a patron's information when they return to borrow a book. This feature ensures that the patron's borrowing records are kept up-to-date and accurate. The system retrieves the patron's details using either their **unique ID** or **name**.

### Functionality
- **Input**: The librarian can search for a patron by entering either their unique ID or name.
- **Output**: The system retrieves the patron's details, including: Name, sex, addressnique Identification Number and current borrowing records (list of borrowed books, due dates, and overdue status)

### Process
1. **Search by ID or Name**:
 
2. **Retrieve Patron Information**:
 
3. **Update Borrowing Records**:
  
---

## 2. Daily Borrowing Report

The system generates a comprehensive daily report summarizing all borrowing transactions. This report provides insights into patron activities, including the total number of borrowings, the average number of books borrowed per patron, and highlights any patrons who have reached their borrowing limit or have overdue books.

---

## Yonas Demise's Documentation
### 1. Librarian login 
This feature allows the librarian to login to the system using either their password or answering the security question.
#### Process
- Ask the librarian to choose between password and security question
- if they choose password ask the librarian to enter password
- if they choose security question ask librarian to enter the answer for they security question

### 2. Patron registration - Creating password for patron 
This feature allows the patron to register along with password and security question.
#### Process
- Ask the patron to create password
- Ask the patron if they want to create security question login path
- if they say yes, ask they patron to choose one question from the provided 3 questions:
  ```
          What is your favorite color?
          What number did you like?
          What is the name of your favorite movie?
  ```
- ask the patron to give answer for the quetion they've chosed

  ## **Yerosan's Book Borrowing with book ID documentation**

## **How It Works**

### 1, **Book Availability Check**
- The program prompts the user to enter a **Book ID**.  
- It validates if the book exists and checks if it's already borrowed by another patron.  
- If the book isn't available, it displays:
    ```text
    Sorry we currently don't have that book right now!
    ```
- If a slot is available (`borrowed_books[h][1] == 0`), it proceeds to assign the book.

---

### 2, **Duplicate Borrowing Prevention**
- Before allowing a patron to borrow a book, the system checks if the patron has already borrowed the same book:
    ```text
    The patron has already borrowed book ID: [Book ID]
    ```
- This prevents duplication in the patron's borrowing record.

---

### 3. **Borrowing Confirmation**
- If the book passes all checks, it is added to the patron's borrowing record:
    ```text
    Book ID: [Book ID] borrowed successfully  
    by patron ID: [Patron ID]
    ```

- The borrowing status is updated:
    - `borrowed_books[add][1]` stores the borrowed **Book ID**.
    - `user_id[id][1]` increments to reflect the number of books borrowed.
    - `numBorrowings` increments to track the total borrowed books.

## **Yerosan's Membership Cancellation documentation**

## **How It Works**

1. **Infinite Loop (`while (true)`)**  
   - The program runs continuously, prompting for a valid **Patron ID**.  
   - It terminates only when an invalid Patron ID is entered.

2. **Patron Validation**  
   - The entered `patronId` is checked against the `user_id` array, which stores patron data.  
   - If a match is found, the program proceeds to check for borrowed books.

3. **Unreturned Book Check**  
   - If a patron has an unreturned book (`user_id[i][1] != 0`), membership cancellation is denied:  
     ```text
     Denied!  
     Reason: Unreturned book
     ```

4. **Membership Cancellation Confirmation**  
   - If no borrowed books are detected (`user_id[i][1] == 0`), the program asks for confirmation:  
     ```text
     Are you sure you want to cancel membership? (y for yes):
     ```
   - If the user enters `y`, membership is canceled, and the Patron ID is removed (`user_id[i][0] = 0`).

5. **Invalid Patron ID Handling**  
   - If the `patronId` is not found in the array, the program displays:  
     ```text
     Invalid patron ID!
     ```

---

## **Code Flow**

1. **User Input:**  
   - Prompt the user to enter a `patronId`.

2. **Validation Loop:**  
   - Iterate through the `user_id` array to check if the `patronId` exists.

3. **Check Borrowed Book Status:**  
   - If a borrowed book is detected (`user_id[i][1] != 0`), display a denial message.

4. **Confirmation for Cancellation:**  
   - Ask for confirmation if no borrowed book exists.  
   - If confirmed (`y`), set `user_id[i][0] = 0`.

5. **Invalid Patron ID Handling:**  
   - If no valid `patronId` is found, display an error message and exit the loop.





