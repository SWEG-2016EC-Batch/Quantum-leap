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
    int numBooks = 0;
    int MAX_BORROWINGS = 20, user_id[MAX_PATRONS][MAX_BORROWINGS+1], borrowerId[MAX_PATRONS];  // first column contains id, second one contains the number of books borrowed.      
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

        if (cin.fail() || choice < 0 || choice > 5) {
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

//----------------------------------end of Yonas Z's feature-----

























//----------------------Yonas Z's feature:
            cout << "Register yourself as the new Library Manager\n";
            cout << "Enter your name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter your sex: ";
            getline(cin, sex);

            cout << "Enter your address: ";
            getline(cin, address);
//------------------------end of Yonas Z's feature and start of Yonas D's feature-------------------





















































































































































                    //-------------------Yonas Z's feature------------------------
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
                                //Yeabsira's feature
                                for (int j = 2; j < MAX_BORROWINGS+1; j++) {
                                    cout << "Books Borrowed with id: " << user_id[i][j] <<endl;
                                    cout<< "At Time: " << ctime(reinterpret_cast<const time_t*>(&actionTime[i][1]));
                                    borrow_count++;
                                }
                                cout<<"He has taken "<<user_id[i][1]<<" books"<<endl;
                                cout<< "-------------------\n";
                                //End of Yeabsira's feature
                            }

                            cout << "Total Borrowings Today: " << borrow_count << " books"<<endl;
                            //Average number of books borrowed by patrons
                            cout<<"The average number of books borrowed per patron is: "<<borrow_count/totalPatrons<<endl;
                            for (int i = 0; i < totalPatrons; i++) {
                        // check if the patron has reached the borrow limit
                        //Yeabsira's feature
                                if (user_id[i][1] > MAX_BORROWINGS) {
                                    cout << "Patron ID: " << user_id[i][0] << " has reached the borrow limit of " << MAX_BORROWINGS << " books\n";
                                }
                        //End of Yeabsira's feature
                            }
                        }
                        goto menu;
                    break;
                    //-------------------End of Yonas Z's feature------------------------
                    case 5:
                    //-------------------Start of Yafet's feature------------------------
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
                        goto menu;
                        break;
                    //-------------------End of Yafet's feature------------------------





































































    // ---------------------------Yoans Z's features----------------------
//---------------------------------Register patron-------------------------------------------------------------
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
                id = (totalPatrons + 1) * 1234567 % 100000000; // Generate an 8-digit ID using a mathematical formula

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











































































































































































































































































































































































































