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

# **Yerosan's Penalty system Documentation**

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
- if they say yes, ask they patron to choose one question from the provided 3 questions
- ask the patron to give answer for the quetion they've chosed

