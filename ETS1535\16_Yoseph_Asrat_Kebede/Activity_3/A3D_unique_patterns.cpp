#include <iostream>
using namespace std;
int main() {
    int option;
    int choice;
    cout<<"Welcome to the programed designed to play with number"<<endl;
    cout<<"There are a selection ways in which you can manupilate pattern and below are your options to do so."<<endl;
    cout<<"If you want to print a 1 to 5 square press 1."<<endl;
    cout<<"If you want to print the pattern of the alphabet in a 4 by 6 box press 2."<<endl;
    cout<<"If you want to print a left half bottom pyramid with increasing numbers press 3"<<endl;
    cout<<"If you want to print a right half bottom pyramid with increasing numbers press 4"<<endl;
    cout<<"If you want to print a left half bottom pyramid with increasing alphabetical characters press 5"<<endl;
    cout<<"If you want to print a A to E square press 6"<<endl;
    cout<<"If you want to print a 7 by 8 hollow box press 7"<<endl;
    cout<<"If you want to print an inverted a left bottom half triangle press 8"<<endl;
    cout<<"If you want to print an hollow inverted a left bottom half triangle press 9"<<endl;
    cout<<"If you want to print a full pyramid press 10"<<endl;
    cout<<"If you want to print an inverted full pyramid press 11"<<endl;
    cout<<"If you want to print a hollow full pyramid press 12"<<endl;
    in:
    cout<<"So you choose ";
    cin>>option;
    cout<<"Do you want to make your own pattern? If so press 0 if not press anything else. ";
    cin>>choice;
    if (option > 12 || option < 1) {
        cout<<"Invalid option, choose a pattern that already exists."<<endl;
        goto in;
    }
    if (choice != 0) {
       switch (option) {
        //patern 1
            case 1:
            for (int i = 0; i < 5; i++) {
                for (int k = 0; k < 5; k++) {
                    cout << k+1<<" ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 2
            case 2:
            for (int i = 0; i < 4; i++) {
                for (int k = 0; k < 6; k++) {
                    cout <<char(65+k+(6*i))<<" ";
                }
                cout << endl;
            }
            cout<<endl;
            break;
        //patern 3
            case 3:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < i+1; j++) {
                    cout << j+1 << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 4
            case 4:
            for (int j = 0; j < 5; j++){
                for (int i = 1; i < 5-j; i++) {
                    cout << "  ";
                }
                for (int k = j; k >= 0; k--) {
                    cout << k+1 << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 5
            case 5:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < i+1; j++) {
                    cout <<char(65+j) << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 6
            case 6:
            for (int i = 0; i < 5; i++) {
                for (int k = 0; k < 5; k++) {
                    cout << char(97+k)<<" ";
                }
                cout << endl;
            }
            cout<<endl;
            break;
        //patern 7
            case 7:
            for (int i = 0; i < 7; i++) {
                for (int k = 0; k < 7; k++) {
                    if (((i == 0) || (k == 0)) || ((i == 6) || (k == 6))) {
                    cout << "*"<<" ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 8
            case 8:
            for (int j = 0; j< 6; j++){
                for (int i = 0; i< 6-j; i++) {
                    cout<<"*"<<" ";
                }
                cout<<endl;
            } 
            cout<<endl;
            break;
        //patern 9
            case 9:
            for (int j = 0; j< 6; j++){
                for (int i = 0; i< 6-j; i++) {
                    if (((i == 0) || (j == 0)) || (i == 5-j)) {
                        cout<<"*"<<" ";
                    } else {
                        cout<<"  ";
                    }
                }
                cout<<endl;
            }
            cout<<endl;
            break;
        //patern 10 
            case 10:
            for (int j = 0; j < 6; j++){
                for (int i = 0; i < 5-j; i++) {
                    cout << " ";
                }
                for (int k = 0; k <= j; k++) {
                    cout <<"*" << " ";
                }
                cout << endl;
            }
            cout << endl;
            break; 
        //patern 11
            case 11:
            for (int j = 0; j < 6; j++){
                for (int k = 1; k <= j; k++) {
                    cout<<" ";
                }
                for (int i = 0; i < 6-j; i++) {
                    cout<<"*"<<" ";
                }
                cout << endl;
            }
            cout<<endl;
            break;
        //patern 12
            case 12:
            for (int j = 0; j < 6; j++){
                for (int i = 0; i < 5-j; i++) {
                    cout << " ";
                }
                for (int k = 0; k <= j; k++) {
                if (((j == 5) || (k == 0)) || (k == j)) {
                        cout<<"*"<<" ";
                    } else {
                        cout<<"  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
    } else {
        cout<<"-------- Let's get started --------"<<endl;;
        int height, width;
        cout<<"What should be the height of your pattern ";
        cin>>height;
        if (option == 1 || option == 2 || option == 7) {
            cout<<"What should be the width of your pattern ";
            cin>>width;
        }
        switch (option) {
        //patern 1
            case 1:
            for (int i = 0; i < height; i++) {
                for (int k = 0; k < width; k++) {
                    cout << k+1<<" ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 2
            case 2:
            for (int i = 0; i < height; i++) {
                for (int k = 0; k < width; k++) {
                    cout <<char(65+k+(6*i))<<" ";
                }
                cout << endl;
            }
            cout<<endl;
            break;
        //patern 3
            case 3:
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < i+1; j++) {
                    cout << j+1 << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 4
            case 4:
            for (int j = 0; j < height; j++){
                for (int i = 1; i < 5-j; i++) {
                    cout << "  ";
                }
                for (int k = j; k >= 0; k--) {
                    cout << k+1 << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 5
            case 5:
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < i+1; j++) {
                    cout <<char(65+j) << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 6
            case 6:
            for (int i = 0; i < height; i++) {
                for (int k = 0; k < 5; k++) {
                    cout << char(97+k)<<" ";
                }
                cout << endl;
            }
            cout<<endl;
            break;
        //patern 7
            case 7:
            for (int i = 0; i < height; i++) {
                for (int k = 0; k < width; k++) {
                    if (((i == 0) || (k == 0)) || ((i == height-1) || (k == width-1))) {
                    cout << "*"<<" ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            break;
        //patern 8
            case 8:
            for (int j = 0; j< height; j++){
                for (int i = 0; i< 6-j; i++) {
                    cout<<"*"<<" ";
                }
                cout<<endl;
            } 
            cout<<endl;
            break;
        //patern 9
            case 9:
            for (int j = 0; j< height; j++){
                for (int i = 0; i< 6-j; i++) {
                    if (((i == 0) || (j == 0)) || (i == 5-j)) {
                        cout<<"*"<<" ";
                    } else {
                        cout<<"  ";
                    }
                }
                cout<<endl;
            }
            cout<<endl;
            break;
        //patern 10 
            case 10:
            for (int j = 0; j < height; j++){
                for (int i = 0; i < 5-j; i++) {
                    cout << " ";
                }
                for (int k = 0; k <= j; k++) {
                    cout <<"*" << " ";
                }
                cout << endl;
            }
            cout << endl;
            break; 
        //patern 11
            case 11:
            for (int j = 0; j < height; j++){
                for (int k = 1; k <= j; k++) {
                    cout<<" ";
                }
                for (int i = 0; i < 6-j; i++) {
                    cout<<"*"<<" ";
                }
                cout << endl;
            }
            cout<<endl;
            break;
        //patern 12
            case 12:
            for (int j = 0; j < height; j++){
                for (int i = 0; i < height-j; i++) {
                    cout << " ";
                }
                for (int k = 0; k <= j; k++) {
                if (((j == height-1) || (k == 0)) || (k == j)) {
                        cout<<"*"<<" ";
                    } else {
                        cout<<"  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
    }                   
    return 0;
}