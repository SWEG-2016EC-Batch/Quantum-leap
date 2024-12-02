#include <iostream>

using namespace std;

int main()
{
    double capacity,miles_per_gallon,total_miles;
    char answer;
    label:
    cout<<"What is the capacity of the car's fuel tank in gallons?"<<endl; // to inform the user that the inserted capacity value is wrong
    cin>>capacity;
    if(cin.fail() || capacity<0) {   
        cout<<"You entered invalid input, please enter again"<<endl;
        cin.clear();
        cin.ignore();
        goto label;     // to return back and ask the user to input the capacity value again
    }
    label2:
    cout<<"How many miles the car can go without refueling?"<<endl;
    cin>>miles_per_gallon;
    if(cin.fail() || miles_per_gallon<0) {
        cout<<"You entered invalid input, please enter again"<<endl;   // to inform the user that the inserted mile value is wrong
        cin.clear();
        cin.ignore();
        goto label2;    // to return back and ask the user to input the mile again
    }
    total_miles= capacity*miles_per_gallon;
    cout<<"Based on the information you gave me, the car can go "<<total_miles<<" miles without refueling."<<endl;
    label3:
        cout<<"Do you want to calculate again?\n Say 'Y' for yes and 'N' for no."<<endl;
        cin>>answer;
        if (answer=='Y') {
            goto label;  // to return back to label and calculate the miles per gallon
        } else if(answer=='N') {
        cout<<"Have a nice Day!"<<endl;
        } else {
        cout<<"You entered invalid input, please enter again"<<endl;
        cin.clear();
        cin.ignore();
        goto label3;    // to allow the user to have another chance to choose either they calculate again or stop the program
        }
    return 0;
}
