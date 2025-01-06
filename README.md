# Quantum-leap-
Quantum leap team repo
\Yoseph Asrat Kebede 1535/16

## Flowchart
```mermaid
 graph TD 
 
    A([Start]) -->B[/Show Menu with options 
            0. Resigster as the Librarian
            1. Login Librarian
            2. Register Patron 
            3. Login Patron
            4. Cancel Membership
            5. Exit
            /] 
    B --> |option 0| C[/Enter name
                        Enter address
                        Enter sex
                        create new password
                        /] 
    C --> D[/Press 0 to create security question and 1 if not/] 
    D --> |option 0| E[/Security Menu
                       1.What is your favorite color?
                       2.What number did you like?
                       3. What is the name of your favorite movie?/] 
    E -->|option 1| F[/Enter your favourite color/] 
    E --> |option 2| G[/Enter the number you like/]  
    E --> |option 3| H[/Enter your favorite movie/]
    B --> |option 1| I[/Enter your password/]
    I --> J{Password==correct password}
    J --> |True| K[/Librarian Section
                    1. Maximum number of books to be borrowed, and due dates
                    2. Add a book to library
                    3. Delete a book from the library
                    4. Display the daily report
                    5. Display the daily borrowing statistics
                    6. Search for a patron
                    7. Patrons with overdue books
                    8. Go back to Main Menu/]                 
    K --> |option 1| L[/Display the maximum number of books the patron van borrow
                        Display the due date for borrowed book/] 
    K --> |option 2| M[Add new book name
                       Add new book ID] 
    K --> |option 3| N[Delete book ID] 
    K --> |option 4| N[Display daily book borrow history] 
    K --> |option 5| O[calculate daily borrow statistics] 
    K --> |option 6| P[Search patron by Id] 
    K --> |option 7| Q[Display patron with overdue books] 
    K --> |option 8| B[/Show Menu with options 
            0. Resigster as the Librarian
            1. Login Librarian
            2. Register Patron 
            3. Login Patron
            4. Cancel Membership
            5. Exit
            /]  
    J --> |False| P[/Incorrect passwprd/]
    B --> |option 2| Q[/Register new patron
                        Ask their name
                        ASk their address
                        Ask their sex
                        Create new password
                        Create security question/]
    B --> |option 3| R{Does patron Id exist?}
    R --> |Yes| S[/Menu
                   1. Borrow a book
                   2. Return a book
                   /] 
    S --> |option 1| T[Borrow the book with specified Id]
    S --> |option 2| U[Add the returned book]
    R ---> |No| V[/patron not found/]
    B ---> |option 4| W[Remove patron Id and history]
    B ---> |option 5| X([End])
    H --> X([End])
    Q --> X([End])
    P --> X([End])
    Q --> X([End])
    T --> X([End])
    U --> X([End])
    V --> X([End])
    W --> X([End])
    
