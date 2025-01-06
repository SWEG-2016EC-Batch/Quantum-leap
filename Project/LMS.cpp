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
    const char correctName[] = "Yoseph Asrat Kebede";
    const char correctPassword[] = "14526342652";
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
        cout << "0. Resigster as the Librarian\n";
        cout << "1. Login Librarian\n";
        cout << "2. Register Patron\n";
        cout << "3. Login Patron\n";
        cout << "4. Cancel Membership\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin>>choice;
        // Yonas Z's warning feature

        if (cin.fail() || choice < 1 || choice > 5) {
            cin.clear();
            cin.ignore();
            errorCounter++;
            if (errorCounter<maximumErrorAttempt) {
                    cout << "If you are not sure to about exiting.\n";
                    goto menu;
            }
            else{
                    cout << "Exiting the system. Goodbye!\n";
                    return 0;
                }

        }

        if (choice == 0) {
//Login the Librarian
//------------------------Yoseph's feature:
             while (true) {
               char Lib_name[50], pswd[50];
                cout << "Enter name: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
//----------------Yoseph's features---------------------
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
                    case 4:
                        cout << "4. === Daily Report ==="<<endl;

                        if (totalPatrons == 0) {
                            cout << "No patrons registered today.\n";
                        } else {
                            

                            for (int i = 0; i < totalPatrons; ++i) {
                                cout << "ID: " << user_id[i][0] << "\n";
                                cout << "Name: " << user_name[i] << "\n";
                                cout << "Sex: " << user_sex[i] << "\n";
                                cout << "Address: " << user_address[i] << "\n";
                                for (int j = 2; j < MAX_BORROWINGS+1; j++) {
                                    cout << "Books Borrowed with id: " << user_id[i][j] <<endl;
                                    cout<< "At Time: " << ctime(reinterpret_cast<const time_t*>(&actionTime[i][1]));
                                    borrow_count++;
                                }
                                cout<<"He has taken "<<user_id[i][1]<<" books"<<endl;
                                cout<< "-------------------\n";
                            }

                            cout << "Total Borrowings Today: " << borrow_count << " books"<<endl;
                            //Average number of books borrowed by patrons
                            cout<<"The average number of books borrowed per patron is: "<<borrow_count/totalPatrons<<endl;
                            for (int i = 0; i < totalPatrons; i++) {
                        // check if the patron has reached the borrow limit
                                if (user_id[i][1] > MAX_BORROWINGS) {
                                    cout << "Patron ID: " << user_id[i][0] << " has reached the borrow limit of " << MAX_BORROWINGS << " books\n";
                                }
                            }
                        }

                    break;

















                    //-------------------The start of Yafet's feature------------------------
                        cout << "5. Display Daily Borrowing Statistics\n";
    // calculate daily statistics
                        // count unique borrowers
                        

                        
                        for(int i = 0; i < numBorrowings; i++) {
                            int currentId = borrowerId[i];
                            bool alreadyCounted = false;
                            
                            // check if this patron was already counted
                            for(int j = 0; j < i; j++) {
                                if(borrowerId[j] == currentId) {
                                    alreadyCounted = true;
                                    break;
                                }
                            }
                            
                            if(alreadyCounted == false) {
                                uniqueBorrowers++;
                            }
                        }
                        
                        if(uniqueBorrowers > 0) {
                            float average = (float)numBorrowings / uniqueBorrowers;
                            cout << "Average books borrowed per patron: " << average << "\n";
                        } else {
                            cout << "No borrowings recorded today.\n";
                        }
                        cout<<"Patron Idcode \t Remaining borrow limit out of "<<MAX_BORROWINGS<<"\n";//highlight any patron who reched or remaining thier own borrow limit. 
                        for(int i=0; i<5; i++){
                        if(user_id[i][1]<MAX_BORROWINGS){
                            cout<<"\t"<<user_id[i][0]<<"\t"<<MAX_BORROWINGS-user_id[i][1]<<"\n";
                        }
                        }
                        for(int i=0; i<totalPatrons; i++){
                            chrono::system_clock::time_point now = chrono::system_clock::now();
                            time_t currentTime = chrono::system_clock::to_time_t(now);
                            secondsDifference = difftime(currentTime, actionTime[i][1]);
                            daysDifference = secondsDifference / (60 * 60 * 24); // Convert seconds to days

                            cout << "ID: " << actionTime[i][0]
                                << ", Days since action: " << daysDifference;

                            if (daysDifference > dueDate) {
                                cout << " -> Borrowed more than 10 days ago, has penalty.\n";
                            } else {
                                cout << " -> Borrowed within 10 days.\n";
                            }
                        }
                        break;
                    //-------------------End of Yafet's feature------------------------






















            //Yafet's feature:
            cout<<"Would like to login with your name or ID? \nIf by ID choose 1 and if by Name choose 2, choose anything else to reutrn to menu: ";
            cin>>choose;
            if(choose == 1) {
                cout << "1. Search Patron by ID\n";//------------------
                cout << "Enter patron ID: ";
                cin >> searchId;
                bool found = false;
                for(int i = 0; i < totalPatrons; i++) {
                    if(user_id[i][0] == searchId) {
                        i = id;
                        cout << "\nPatron found!\n";
                        cout << "ID: " << user_id[i][0] << "\n";
                        cout << "Name: " << user_name[i] << "\n";
                        found = true;
                    }
                    }
                    if(found == false) {
                        cout << "Patron not found!\n";
                        goto menu;
                    }
                } else if (choose == 2) {
                        cout << "2. Search Patron by Name\n";//--------------------
                        cout << "Enter patron name: ";
                        cin.ignore();
                        getline(cin, searchName);
                        bool fund = false;
                        for(int i = 0; i < totalPatrons; i++) {
                            if(user_name[i] == searchName) {
                                i = id;
                                cout << "\nPatron found!\n";
                                cout << "ID: " << user_id[id][0] << "\n";
                                cout << "Name: " << user_name[id] << "\n";
                                fund = true;
                            } 
                        }
                        if(fund == false) {
                            cout << "Patron not found!\n";
                            goto menu;
                        }

                } else {
                    goto menu;
                }
                //End of Yafet's feature



































//Yafet's feature 
//Borrow a book:
                    case 1:
                            //Yeabsira's feature:
                            if(user_id[id][1] > MAX_BORROWINGS){
                                cout<<user_name[id]<<", you have reached borrow limit \n";
                                cout<<"You need to return the books you have borrowed in order to borrow others."<<endl;
                                break;
                                }
                            //End of Yeabsira's feature
                            cout<<"You can borrow "<<MAX_BORROWINGS-user_id[id][1]<<" books."<<endl;
                            cout<<"How would you like to borrow the book: ";
                            cout<<"1. By name"<<endl;
                            cout<<"2. By ID"<<endl;
                            cin>>choice;
                            if (choice == 1) {
                                //------Borrow a book by name:
                                    books:
                                    cout<<"The patron with the idnumber "<<user_id[id][0]<<" has "<<MAX_BORROWINGS-user_id[id][1]<<" books left to the borrow limit. \n";
                                    cout << "Enter the name of book you want to borrow: ";
                                    getline(cin, book);
                                    for (int h; h < numBorrowings; h++) {
                                        if (booksId[h][1] != book) {
                                            cout<<"Sorry we currently don't have that book right now! ";
                                            goto books;
                                        }
                                        if (borrowed_books[h][0] == book) {
                                            cout<<"Sorry we currently don't have that book right now! ";
                                            goto books;
                                        }
                                        if (stoi(borrowed_books[h][1])/1 == 0) {
                                            add = h;
                                            break;
                                        }
                                    }
                                    

                                    cout<<"Enter the id of the book: ";
                                    cin>>idd;
                                    for (int k = 0; k < MAX_BORROWINGS+1; k++) {
                                        if(user_id[id][k]/1 == 0) {
                                            user_id[id][k] = idd;
                                            break;
                                        }
                                    }
                                    borrowed_books[add][0] = book;
                                    borrowed_books[add][1] = idd;
                                    user_id[id][1]++;
                                    numBorrowings++;




















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
                    
                        // Yoans Z feature
//---------------------------------Register patron-------------------------------------------------------------

            }
        }
            
                    else if (choice == 2) {
            if (totalPatrons >= MAX_PATRONS) {
                cout << "Maximum patron limit reached. Cannot register more patrons.\n";
                continue;
            }
            if (totalPatrons == 0) {
                srand(time(0)); // This initializes the first random number it is called seed.
            }
            int id;
            bool unique;
            do {
                unique = true;
                id = rand() % 100000000; // this generates a random 8-digit ID

                // Check if ID is already assigned
                for (int i = 0; i < totalPatrons; i++) {
                    if (user_id[i][0] == id) {
                        unique = false;
                        break;
                    }
                }
            } while (!unique);


            cout << "Enter your name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter your sex: ";
            getline(cin, sex);

            cout << "Enter your address: ";
            getline(cin, address);
//end of Yonas Z feature.
                        //------------------------Yonas D's feature--------------------------
            cout<<"Please Enter the Password: ";
            getline(cin, login_password);

            
            choiice:
            cout << "Do you want to create a security question? press 0 if not press 1" << endl;
            cin >> choice;
            if (cin.fail() || (choice != 0 && choice != 1)) {
                cin.clear();
                cin.ignore();
                errorCounter++;
                if (errorCounter<maximumErrorAttempt) {
                        cout << "Invalid input.\n";
                        goto choiice;
                }
                else{
                        cout << "Exiting the system. Goodbye!\n";
                        return 0;
                    }
            }
            if (choice == 0) {
                cout << "*****SECURE*****" << endl;
                cout << "Press 1 for the question \"What is your favorite color?\"" << endl;
                cout << "Press 2 for the question \"What number did you like?\"" << endl;
                cout << "Press 3 for the question \"What is the name of your favorite movie?\"" << endl;
                cin >> secure;
                errorCounter = 0;
                if (cin.fail() || secure < 1 || secure > 3) {
                    cin.clear();
                    cin.ignore();
                    errorCounter++;
                    if (errorCounter<maximumErrorAttempt) {
                            cout << "Invalid input.\n";
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            goto choce;
                    } else {
                        cout << "Exiting the system. Goodbye!";
                        return 0;
                    }
                }
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                switch(secure) {
                    case 1:
                    strcpy(security_question,"What is your favorite color?");
                        cout << "What is your favorite color? ";
                        cin.getline(security_answer, 50); 
                        break;
                    case 2:
                    strcpy(security_question,"What number did you like?");
                        cout << "What number did you like? ";
                        cin.getline(security_answer, 50);
                        break;
                    case 3:
                    strcpy(security_question,"What is the name of your favorite movie?");
                        cout << "What is the name of your favorite movie? ";
                        cin.getline(security_answer, 50);
                        break;
                }
            }
            //End of Yonas D's feature
            user_id[totalPatrons][0] = id;
            user_name[totalPatrons] = name;
            user_sex[totalPatrons] = sex;
            user_address[totalPatrons] = address;
            totalPatrons++;

            cout << "You have registered successfully with ID: " << id << " PLEASE SECURE YOUR ID IN A SAFE PLACE!\n";
            goto menu;
        }




































                cout<<"---------You have successfully logged in!--------------"<<endl;
                cout<<"What would you like to do?"<<endl;
                cout<<"1. Borrow a book"<<endl;
                cout<<"2. Return a book"<<endl;
                cin>>choose;
                switch (choose) {
//Yafet's feature 
//Borrow a book:
                    case 1:
                            //Yeabsira's feature:
                            if(user_id[id][1] > MAX_BORROWINGS){
                                cout<<user_name[id]<<", you have reached borrow limit \n";
                                cout<<"You need to return the books you have borrowed in order to borrow others."<<endl;
                                break;
                                }
                            //End of Yeabsira's feature
                            cout<<"You can borrow "<<MAX_BORROWINGS-user_id[id][1]<<" books."<<endl;
                            cout<<"How would you like to borrow the book: ";
                            cout<<"1. By name"<<endl;
                            cout<<"2. By ID"<<endl;
                            cin>>choice;
                            if (choice == 1) {
                                //------Borrow a book by name:
                                    books:
                                    cout<<"The patron with the idnumber "<<user_id[id][0]<<" has "<<MAX_BORROWINGS-user_id[id][1]<<" books left to the borrow limit. \n";
                                    cout << "Enter the name of book you want to borrow: ";
                                    getline(cin, book);
                                    for (int h; h < numBorrowings; h++) {
                                        if (booksId[h][1] != book) {
                                            cout<<"Sorry we currently don't have that book right now! ";
                                            goto books;
                                        }
                                        if (borrowed_books[h][0] == book) {
                                            cout<<"Sorry we currently don't have that book right now! ";
                                            goto books;
                                        }
                                        if (stoi(borrowed_books[h][1])/1 == 0) {
                                            add = h;
                                            break;
                                        }
                                    }
                                    

                                    cout<<"Enter the id of the book: ";
                                    cin>>idd;
                                    for (int k = 0; k < MAX_BORROWINGS+1; k++) {
                                        if(user_id[id][k]/1 == 0) {
                                            user_id[id][k] = idd;
                                            break;
                                        }
                                    }
                                    borrowed_books[add][0] = book;
                                    borrowed_books[add][1] = idd;
                                    user_id[id][1]++;
                                    numBorrowings++;
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
//End of Yoseph's feature and start of Yerosan's feature
                                //------Borrow a book by ID:
                                    bool bookFound;
                                    bookFound = false;

                                    cout << "Enter the book's ID: ";
                                    cin >> bookId;
                                    for (int h=0; h < numBorrowings; h++) {
                                        if (stoi(booksId[h][0]) == bookId) {
                                            cout<<"Sorry we currently don't have that book right now! ";
                                            goto books;
                                        }
                                        if (stoi(borrowed_books[h][1]) == bookId) {
                                            cout<<"Sorry we currently don't have that book right now! ";
                                            goto books;
                                        }
                                        if (stoi(borrowed_books[h][1])/1 == 0) {
                                            add = h;
                                            break;
                                        }
                                    }
                                    for (int j = 0; j < 100; j++){
                                        if (bookId == stoi(booksId[j][1])){
                                            bookFound = true;
                                            for (int k = 2; k < MAX_BORROWINGS+1; k++) {
                                                if (user_id[id][k] == stoi(booksId[j][1])){
                                                    cout << "The patron has already borrowed book ID: " << booksId[j][1] << "\n";
                                                    break;
                                                }    
                                            }
                                            for (int m = 0; m < MAX_BORROWINGS+1; m++) {
                                                if(user_id[id][m]/1 == 0) {
                                                    cout << "Book ID: " << booksId[j][1] << " borrowed successfully\nby patron ID: " << user_id[id][0] <<endl;
                                                    break;
                                                }
                                            }     
                                        }
                                        if (!bookFound){
                                            cout << "Invalid Book Id! \n";
                                        }
                                        borrowed_books[add][1] = bookId;
                                        user_id[id][1]++;
                                        numBorrowings++;                                        
//End of Yerosan's feature and start of Yoseph's feature
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
//Yeabsira's feature:
                        //History of borrowed books:
                        cout<<"Do you want to look at your borrowing history? press \'y\' for yes: ";
                        char history;
                        cin>>history;
                        if (history == 'y'){
                            for (int j = 2; j < MAX_BORROWINGS+1; j++) {
                                cout << "Books Borrowed with id: " << user_id[id][j] <<endl;
                                cout << "You have borrowed a total of "<< user_id[id][1] << " books and you have " << MAX_BORROWINGS-user_id[id][1] << " books left to borrow."<<endl;
                            }
                        }
                        //End of Yeabsira's feature
                        break;
//End of Yoseph's features---------------------------------
                }
        }
        else if (choice == 4) {
//Start of Yerosan's feature's:---------------------------
            while (true){
                bool patronFound;
                int patronId;
                cout << "Enter patron ID: ";
                cin >> patronId;
                patronFound = false;
                for (int i = 0; i < totalPatrons; i++){
                    if (user_id[i][0] == 0){
                        break;
                    }
                    if (patronId == user_id[i][0]){
                        patronFound = true;
                        if (user_id[i][1] != 0) {
                            cout << "Denied!\nReason: Unreturned book\n";
                            break;
                        }
                        else {
                            char patronSure;
                            cout << "\nAre you sure you to cancel membership? (y for yes): ";
                            cin >> patronSure;
                            if (patronSure == 'y'){
                                user_id[i][0] = 0;
                                cout << "Membership cancelled successfully!\n\n";
                            } 
                        }
                    }
                }
                if (!patronFound){
                    cout << "Invalid patron ID!\n";
                    break;
                }
            }
            goto menu;
        }
//End of Yerosan's features------------------------------------------
// Yeabsira's feature
        else if (choice ==5) {
            cout << "----- Exiting the system. Goodbye! ------";
            break;
        }
//End of Yeabsira's feature
    
    }
return 0;

}
