#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        int userMainMenuChoice, userMenuChoice;
        // Main Menu
        firstLabel:
        cout << "\nEnter your choice to print a pattern listed here:" << endl;
        cout << "\nPress 0. To exit\n1. Number Rectangle\n2. Alphabet Rectangle\n3. Number Triangle\n4. Descending Number Pyramid" << endl;
        cout << "5. Alphabet Triangle\n6. Small Letter Alphabet Rectangle\n7. Hollow Rectangle\n8. Inverted Half Pyramid" << endl;
        cout << "9. Hollow Inverted Half Pyramid\n10. Full Pyramid\n11. Inverted Full Pyramid\n12. Hollow Full Pyramid" << endl;
        cin >> userMainMenuChoice;
        if (cin.fail() || userMainMenuChoice < 0 || userMainMenuChoice > 12) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input! Please choose a valid option." << endl;
            goto firstLabel;
        }
        // Secondary Menu
        secondLabel:
        cout << "Enter your choice here press:\n0.To go back to mainmenu\n1. To see an example\n2. To choose dimensions (rows and columns) yourself" << endl;
        cin >> userMenuChoice;

        if (cin.fail() || userMenuChoice < 0 || userMenuChoice > 2) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input! Please choose value on the list." << endl;
            goto secondLabel;
        }

        switch (userMainMenuChoice) {
            int rows,columns,rowLength,columnLength,rowSpaces,rowSpaceController;
            case 0:  cout << "Exiting the program. Goodbye!" << endl;
                     break;
            case 1:{ 
                switch (userMenuChoice) {
                    case 0: goto firstLabel;
                    case 1:
                        cout << "\nExample: "<<endl;
                        for ( rows = 1; rows <= 5; rows++){
                            for ( columns = 1; columns <= 5; columns++){
                               cout<<columns<<" ";
                            }
                            cout<<endl;
                        }
                        sleep(3);                     
                        goto secondLabel;
                    case 2: cout<<"enter the number of rows"<<endl;
                            cin>>rowLength;
                            cout<<"enter the number of columns"<<endl;
                            cin>>columnLength;
                            for ( rows = 1; rows <= rowLength; rows++){
                                for (columns  = 1; columns <= columnLength; columns++){
                                   cout<<columns<<" ";
                                }
                                cout<<endl;
                            }
                        sleep(3);
                        break;
                    default: cout<<"This value is not on the list!"<<endl;
                }
               sleep(3);
                break;
            }
            case 2:{ // Alphabet Rectangle
                switch (userMenuChoice) {
                    case 1:{
                        cout << "\nExample: "<<endl;
                        char initialLetter = 'A';
                        for ( rows = 1; rows <= 4; rows++) {
                            for ( columns = 1; columns <= 6; columns++) {
                                cout << initialLetter << " ";
                                initialLetter++;
                            }
                            cout << endl;
                        }
                        sleep(3);
                        goto secondLabel;
                    }
                    case 2: {
                        char initialLetter = 'A';
                        cout << "Enter number of rows: ";
                        cin >> rows;
                        cout << "Enter number of columns: ";
                        cin >> columns;
                        for ( rows = 1; rows <= rows; rows++) {
                            for ( columns = 1; columns <= columns; columns++) {
                                cout << initialLetter;
                                initialLetter++;
                                     if (initialLetter > 'Z'){
                                            initialLetter = 'A';
                                     }
                                
                            }
                            cout << endl;
                        }
                        sleep(3);
                       break;
                    }
                   default:cout<<"This value is not on the list"<<endl;
                   break;

                }
            }
            case 3: // Number Triangle
                switch (userMenuChoice){
                    case 1:
                        cout << "\nExample: "<<endl;
                        for ( rows = 1; rows <= 5; rows++){
                            for ( columns = 1; columns <= rows; columns++){
                              cout<<setw(2)<<columns <<" ";
                            }
                            cout << endl;
                        }
                        goto secondLabel;
                    case 2: {
                        cout << "Enter number of rows: ";
                        cin >> rows;
                        for ( rows = 1; rows <= rows; rows++) {
                            for ( columns = 1; columns <= rows; columns++) {
                                cout << columns << " ";
                            }
                            cout << endl;
                        }
                        break;
                    }
                }
                break;

            case 4: // Descending Number Pyramid
                switch (userMenuChoice) {
                    case 1:{
                         cout << "\nExample: "<<endl;
                            int m =5;
                            for ( rows = 1; rows <= 5; rows++){
                                   
                               for ( rowSpaces = 1; rowSpaces < m; rowSpaces++){
                                   cout<<"   ";
                               }
                               for ( columns = rows; columns >= 1; columns--){
                                     cout<<setw(2)<<columns<<" ";
                               }
                               cout<<endl;
                               m--;
                           }
                           sleep(2);
                        goto secondLabel;
                    }
                    case 2: {
                        cout << "Enter number of rows: "<<endl;
                        cin >> rows;
                        for ( rows = 1; rows <= rows; rows++) {
                            for ( columns = rows; columns >= 1; columns--) {
                                cout << columns << " ";
                            }
                            cout << endl;
                        }
                        sleep(3);
                        break;
                    }
                }
                break;
            case 5:{ // Alphabet Triangle
                switch (userMenuChoice) {
                    case 1:{
                        cout << "\nExample: "<<endl;
                        for ( rows = 1; rows <= 5; rows++){
                               char initialLetter = 'A';
                            for ( columns = 1; columns <= rows; columns++){
                               cout<<initialLetter<<" ";
                               initialLetter++;
                            }
                            cout<<endl;
                        }
                        sleep(3);
                        goto secondLabel;
                    }
                    case 2: {
                        cout << "Enter number of rows: ";
                        cin >> rows;
                        for ( rows = 1; rows <= rows; rows++) {
                               char initialLetter = 'A';
                            for ( columns = 1; columns <= rows; columns++) {
                                cout << initialLetter;
                                initialLetter++;
                                     if (initialLetter > 'Z'){
                                            initialLetter = 'A';
                                     }
                                
                            }
                            cout << endl;
                        }
                        sleep(3);
                       break;
                    }
                }
            }
            case 6:{
                switch (userMenuChoice) {
                    case 0: goto firstLabel;
                    case 1:{
                        cout << "\nExample: "<<endl;
                        for ( rows = 1; rows <= 5; rows++){
                              char initialLetter ='a';
                            for ( columns = 1; columns <= 5; columns++){
                               cout<<setw(2)<<initialLetter<<" ";
                               initialLetter++;
                            }
                            cout<<endl;
                        }
                        sleep(3);                     
                        goto secondLabel;
                    }
                    case 2: cout<<"enter the number of rows"<<endl;
                            cin>>rows;
                            cout<<"enter the number of columns"<<endl;
                            cin>>columns;
                            for ( rows = 1; rows <= rows; rows++){
                                 char initialLetter ='a';
                                for ( columns = 1; columns <= columns; columns++){
                                   cout<<setw(2)<<columns<<" ";
                                   initialLetter++;
                                   if (initialLetter > 'z'){
                                         initialLetter = 'a';//to make it start again from the first alphabet 
                                   }
                                   
                                }
                                cout<<endl;
                            }
                        sleep(3);
                        break;
                    default: cout<<"This value is not on the list!"<<endl;
                }
               sleep(3);
                break;
            }
            case 7:{//Hollow Rectangle
                switch (userMenuChoice) {
                       case 1: {
                                 cout << "\nExample: " << endl;
                                 for ( rows = 1; rows <= 7; rows++) {
                                     for ( columns = 1; columns <= 8; columns++) {
                                         if (rows == 1 || rows == 7 || columns == 1 || columns == 8) {
                                             cout << "* ";
                                         } else {
                                             cout << "  "; // Space inside the hollow
                                         }
                                     }
                                     cout << endl;
                                 }
                                     sleep(3);
                                     goto secondLabel;
                        }
                        case 2: {
                                 cout << "Enter the number of rows: ";
                                 cin >> rows;
                                 cout << "Enter the number of columns: ";
                                 cin >> columns;
                                 for ( rows = 1; rows <= rows; rows++) {
                                     for ( columns = 1; columns <= columns; columns++) {
                                         if (rows == 1 || rows == rows || columns == 1 || columns == columns) {
                                             cout << "* ";
                                         } else {
                                             cout << "  "; // Space inside the hollow
                                         }
                                     }
                                     cout << endl;
                                 }
                                  sleep(3);
                                  break;
                        }
                         default:
                         cout << "This value is not on the list!" << endl;
                }
                 break;
            }
            case 8:{ //inverted half pyramid
                     switch (userMenuChoice) {
                         case 1: {
                             cout << "\nExample: " << endl;
                             for ( rows = 6; rows >= 1; rows--){
                                 for ( columns = 0; columns < rows; columns++){
                                        cout<<"*";    
                                 }
                                 cout<<endl;
                             }
                             sleep(3);
                             goto secondLabel;
                         }
                         case 2: {
                             cout << "Enter number of rows: ";
                             cin >> rows;
                             for ( rows = rows; rows >= 1; rows--){
                                 for ( columns = 0; columns < rows; columns++){
                                        cout<<"*";    
                                 }
                                 cout<<endl;
                             }
                             sleep(3);
                             break;
                         }
                        default:
                        cout << "This value is not on the list!" << endl;
                        break;
                     }
    
                    break;
            }
            case 9:{
                     switch (userMenuChoice) {
                         case 1: {
                             cout << "\nExample: " << endl;
                             for ( rows = 6; rows >= 1; rows--) {
                                  for ( columns = 1; columns <= rows; columns++){
                                       if (columns == 1 || columns == rows || rows == 6) {
                                              cout << "*";
                                          } else{
                                              cout << " ";
                                          }
                                  }
                                      cout << endl;
                             }
                             sleep(3);
                             goto secondLabel;
                         }
                         case 2: {
                             cout << "Enter number of rows: ";
                             cin >> rows;
                             for ( rows = rows; rows >= 1; rows--) {
                                  for ( columns = 1; columns <= rows; columns++){
                                       if (columns == 1 || columns == rows || rows == 6) {
                                              cout << "*";
                                          } else{
                                              cout << " ";
                                          }
                                  }
                                      cout << endl;
                             }
                             sleep(3);
                             break;
                         }
                        default:
                        cout << "This value is not on the list!" << endl;
                     }
                    break;
            }
            case 10:{//full pyramid
                     switch (userMenuChoice) {
                         case 1:{
                              int m =5;
                              for ( rows = 1; rows <= 6; rows++){
                                 for ( rowSpaces = 1; rowSpaces <= m; rowSpaces++){
                                     cout<<" ";
                                 }
                                 for ( columns = rows; columns >= 1; columns--){
                                    cout<<"* ";
                                 }
                                 cout<<endl;
                                 m--;
                              }
                                 sleep(3);
                                 goto secondLabel;
                         }
                         case 2:{
                             cout << "Enter number of rows: ";
                             cin >> rows;
                             int m =rows;
                              for ( rows = 1; rows <= rows; rows++){
                                     
                                 for ( rowSpaces = 1; rowSpaces < m; rowSpaces++){
                                     cout<<" ";
                                 }
                                 for ( columns = rows; columns >= 1; columns--){
                                    cout<<"* ";
                                 }
                                 cout<<endl;
                                 m--;
                              }
                             sleep(3);
                             break;
                         }
                        default:
                        cout << "This value is not on the list!" << endl;
                     }
                    break;
            }
            case 11:{//Inverted full pyramid
                     switch (userMenuChoice) {
                         case 1: {
                             cout << "\nExample: " << endl;
                              rowSpaceController = 0;
                              for ( rows = 6; rows >= 1; rows--){
                                     rowSpaceController++;
                                 for ( rowSpaces = 1; rowSpaces < rowSpaceController; rowSpaces++){
                                     cout<<" ";
                                 }
                                 for ( columns = rows; columns >= 1; columns--){
                                    cout<<"* ";
                                 }
                                 cout<<endl;
                              }

                             sleep(3);
                             goto secondLabel;
                         }
                         case 2: {
                             cout << "Enter number of rows: ";
                             cin >> rows;
                              rowSpaceController = 0;
                              for (rows; rows >= 1; rows--){
                                     rowSpaceController++;
                                 for ( rowSpaces = 1; rowSpaces < rowSpaceController; rowSpaces++){
                                     cout<<" ";
                                 }
                                 for ( columns = rows; columns >= 1; columns--){
                                    cout<<"* ";
                                 }
                                 cout<<endl;
                              }
                             break;
                         }
                        default:
                        cout << "This value is not on the list!" << endl;
                     }
                    break;
            }
            case 12:{
                     switch (userMenuChoice) {
                         case 1: {
                             cout << "\nExample: " << endl;
                              rowSpaceController = 5; 
                               for ( rows = 1; rows <= 6; rows++) {
                                   for ( rowSpaces = 1; rowSpaces <= rowSpaceController; rowSpaces++) {
                                       cout << " ";
                                   }
                                   for ( columns = 1; columns <= rows; columns++) {
                                       if (columns == 1 || columns == rows || rows == 6) { // First or last star in a row or last row
                                           cout << "* ";
                                       } else {
                                           cout << "  "; 
                                       }
                                   }
                                   cout << endl;
                                   rowSpaceController--; // Decrease spaces for the next row
                               }                
                             sleep(3);
                             goto secondLabel;
                         }
                         case 2: {
                             cout << "Enter number of rows: ";
                             cin >> rowLength;
                              rowSpaceController = rowLength; 
                               for (rows = 1; rows <= rowLength; rows++) {
                                   for ( rowSpaces = 1; rowSpaces <  rowSpaceController; rowSpaces++) {
                                       cout << " ";
                                   }
                                   for ( columns = 1; columns <= rows; columns++) {
                                       if (columns == 1 || columns == rows || rows == rowLength) { // First or last star in a row or last row
                                           cout << "* ";
                                       } else {
                                           cout << "  "; 
                                       }
                                   }
                                   cout << endl;
                                   rowSpaceController--; // Decrease spaces for the next row
                               }                
                             sleep(3);
                             break;
                         }
                        default:
                        cout << "This value is not on the list!" << endl;
                     }
                    break;
            }
                default:
                cout << "Pattern not implemented yet." << endl;

        }//end of the switch case.
     }
    return 0;
}

