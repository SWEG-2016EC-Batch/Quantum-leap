#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    const int MAX_PATRONS = 1000;  // Maximum number of patrons
    const int MAX_BOOKS = 1000;  // Maximum number of books
    int MAX_BORROWINGS = 20, user_id[MAX_PATRONS][MAX_BORROWINGS+1], numBooks = 0, borrowerId[MAX_PATRONS];  // first column contains id, second one contains the number of books borrowed.      
    char Lib_name[50], pswd[50];
    const char correctName[] = "Yoseph Asrat Kebede";
    const char correctPassword[] = "IdmfSaved";
    string user_name[MAX_PATRONS], name, sex, address, searchName; // first column of user name has the patron names, and the rest are the books they borrowed based on id.
    string user_sex[MAX_PATRONS]; 
    string user_address[MAX_PATRONS], login_password, log_pswd;
    string book, booksId[MAX_BOOKS][2] = {}, borrowed_books[MAX_BOOKS][2]; // Array of books by name and id.
    int totalPatrons = 0,errorCounter=0, maximumErrorAttempt=3;        // Count of registered patrons
    // arrays to store borrowing records for the day
    int numBorrowings = 0;  // number of borrowings for the day
    char security_answer[50], security_question[50], attempts = 3;
    int secure, choose, searchId, id, dueDate = 10, total_penalty = 0, penalty_rate = 10,consumerCount = 0,bookId, add, idd, borrow_count = 0;
    int uniqueBorrowers = 0;
    long actionTime[MAX_PATRONS][3] = {};
    double secondsDifference, daysDifference;
    int choice;
    while (true) {
//Main menu:
        menu:
        cout << "\n********Library System Main Menu:********\n";
        cout << "0. Resigster as the Librarian";
        cout << "1. Login Librarian\n";
        cout << "2. Register Patron\n";
        cout << "3. Login Patron\n";
        cout << "4. Cancel Membership\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin>>choice;



















        if (choice == 0) {
//Register the Librarian
//------------------------Yoseph's feature:
             while (true) {
                cout << "Enter name: ";
                cin.getline(Lib_name, 50);
                cout << "Enter password: ";
                cin.getline(pswd, 50);

                if (strcmp(Lib_name, correctName) == 0 && strcmp(pswd, correctPassword) == 0) {
                    cout << "Login successful!" << endl;
                    break;
                } else {
                    errorCounter++;
                    if (errorCounter >= maximumErrorAttempt) {
                        cout << "Maximum number of attempts reached. Exiting the system. Goodbye!" << endl;
                        return 0;
                    } else {
                        cout << "Incorrect name or password. Please try again." << endl;
                    }
                }
             }
//---------------------end of yoseph's feature--------------------------











































































































            while(true) {
                cout<<"You have entered the correct name and password. "<<endl;
                lib_menu:
                cout<<"\n------------- Librarian Section--------------\n"<<endl;
                cout<<"What would you like to change: "<<endl;
                cout<<"Option 1: Maximum number of books to be borrowed, and due dates."<<endl;
                cout<<"Option 2: Add a book to library"<<endl;
                cout<<"Option 3: Delete a book from the library"<<endl;
                cout<<"Option 4: Display the daily report"<<endl;
                cout<<"Option 5: Display the daily borrowing statistics"<<endl;
                cout<<"Option 6: Search for a patron"<<endl;
                cout<<"Option 7: Patrons with overdue books"<<endl;
                cout<<"Option 8: Go back to Main Menu"<<endl;
                int choose;
                cin>>choose;
                switch (choose) {









                    break;
                    case 2:
                        cout<<"Enter the name of the book you want to add: ";
                        cin>>book;
                        cout<<"Enter the ID of the book you want to add: ";
                        cin>>bookId;
                        booksId[numBooks][0] = bookId;
                        booksId[numBooks][1] = book;
                        numBooks++;
                        cout<<"The book has been added successfully!";
                    break;
                    case 3:
                        cout<<"Enter the ID of the book you want to delete: ";
                        cin>>bookId;
                        for (int i = 0; i < numBooks; i++) {
                            if (stoi(booksId[i][0]) == bookId) {
                                booksId[i][0] = " ";
                                booksId[i][1] = " ";
                                numBooks--;
                                numBorrowings--;
                                cout<<"The book has been deleted successfully!";
                                break;
                            }
                        }
                    break;






























































































                    case 6:
                        cout<<"Enter the Id of the patron you want to lookup: ";
                        cin>>id;
                        for (int l = 0; l < MAX_PATRONS; l++) {
                            if (id == user_id[l][0]) {
                                cout << "ID: " << user_id[l][0] << "\n";
                                cout << "Name: " << user_name[l] << "\n";
                                cout << "Sex: " << user_sex[l] << "\n";
                                cout << "Address: " << user_address[l] << "\n";
                                for (int j = 2; j < MAX_BORROWINGS+1; j++) {
                                    cout << "Books Borrowed with id: " << user_id[l][j] <<endl;
                                    borrow_count++;
                                }
                                cout<<"He has taken "<<user_id[l][1]<<" books"<<endl;
                            } else {
                                cout<<"No such Patron exits!";
                                goto menu;
                            }
                        }
                        break;
                    case 7:
                        cout<<"Patrons with Overdue Books are: ";
                        for(int i=0; i<totalPatrons; i++){
                            chrono::system_clock::time_point now = chrono::system_clock::now();
                            time_t currentTime = chrono::system_clock::to_time_t(now);
                            secondsDifference = difftime(currentTime, actionTime[i][1]);
                            daysDifference = secondsDifference / (60 * 60 * 24); // Convert seconds to days














                        break;
                    case 8:
                        cout<<"Going back to main menu";
                        goto menu;
                    break;
                    default:
                        errorCounter=0;
                        if (cin.fail() || choice < 1 || choice > 4) {
                            cin.clear();
                            cin.ignore();
                            errorCounter++;
                            if (errorCounter<maximumErrorAttempt) {
                                    cout << "If you are not sure to about exiting.\n";
                                    goto lib_menu;
                            }
                            else{
                                    cout << "Exiting the system. Goodbye!\n";
                                    return 0;
                                }

                        }
                    break;
                }
//---------------------End of Yoseph's feature---------------------------------
            }
        }













































































































































































































































//End of Yafet's feature and start of Yoseph's feature
                                    // Capture the current time
                                    chrono::system_clock::time_point now = chrono::system_clock::now();
                                    time_t currentTime = chrono::system_clock::to_time_t(now);

                                    // Store the ID and the current time in the array
                                    actionTime[id][0] = id;
                                    actionTime[id][1] = currentTime;
                                    actionTime[id][2] = stoi(booksId[2][0]);

                                    // Display the stored information
                                    cout << "Patron ID: " << actionTime[id][0] 
                                        << " borrowed at: " 
                                        << ctime(reinterpret_cast<const time_t*>(&actionTime[consumerCount][1]));
                                    
                                    cout << "Borrowing recorded!\n";
                                    cout << "You have borrowed " << user_id[id][1] << " books\n";
                            } else if (choice == 2) {
//End of Yoseph's feature and start of Yafet's feature










































//End of Yafet's feature and start of Yoseph's feature
                                        // Capture the current time
                                        chrono::system_clock::time_point now = chrono::system_clock::now();
                                        time_t currentTime = chrono::system_clock::to_time_t(now);

                                        // Store the ID and the current time in the array
                                        actionTime[id][0] = id;
                                        actionTime[id][1] = currentTime;
                                        actionTime[id][2] = stoi(booksId[2][0]);

                                        // Display the stored information
                                        cout << "Patron ID: " << actionTime[id][0] 
                                            << " borrowed at: " 
                                            << ctime(reinterpret_cast<const time_t*>(&actionTime[consumerCount][1]));
                                        cout << "Borrowing recorded!\n";
                                        cout << "You have borrowed " << user_id[id][1] << " books\n";
                                        break;
                                    }
                                    break;
                            } else {
                                goto menu;}
                        break;
                    case 2:
// Continutation of Yoseph's features: ---------------------------------
//--------Return a book:
                        chrono::system_clock::time_point now = chrono::system_clock::now();
                        time_t currentTime = chrono::system_clock::to_time_t(now);
                        secondsDifference = difftime(currentTime, actionTime[id][1]);
                        daysDifference = secondsDifference / (60 * 60 * 24); // Convert seconds to days














                        cout<<"Enter the id of the book you want to return: ";
                        cin>>idd;
                        for (int k = 0; k < MAX_BORROWINGS+1; k++) {
                            if(user_id[id][k] == idd) {
                                user_id[id][k] = 0;
                                user_id[id][1]--;
                                numBorrowings--;
                                cout<<"The book has been returned successfully!"<<endl;
                                for (int a; a < numBorrowings; a++) {
                                        if (stoi(borrowed_books[a][1])/1 == 0) {
                                            add = a;
                                            break;
                                        }
                                    }
                                borrowed_books[add][1] = '0';
                                borrowed_books[add][0] = ' ';
                                break;
                            }
                        }












                        break;
//End of Yoseph's features---------------------------------
                }
        }
        else if (choice == 4) {



































    }







}
return 0;

}
