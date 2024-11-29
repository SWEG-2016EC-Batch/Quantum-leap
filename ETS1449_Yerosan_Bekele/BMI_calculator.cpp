#include <iostream>
using namespace std;

int main(){
    float user_weight, user_height, bmi;
    char choice;

    while (true){
        line9:
        cout << "Enter weight in kg: ";
        cin >> user_weight;
        //check if the weight entered is valid
        if (cin.fail() || user_weight <= 0){
            cout << "Invalid input please try again!\n";
            cin.clear();
            cin.ignore();
            goto line9;
        }

        line20:
        cout << "Enter height in Meter: ";
        cin >> user_height;

        //check if the height entered is valid
        if (cin.fail() || user_height <= 0){
            cout << "Invalid input please try again!\n";
            cin.clear();
            cin.ignore();
            goto line20;
        }
        
        //calculate the BMI
        float height_squared = user_height * user_height;
        bmi = user_weight / height_squared;

        cout << "your BMi is: " << bmi << endl;
        if (bmi < 18.5){
            cout << "you are under weight! \n \n";
        }else if (bmi > 25){
            cout << "you are over weight! \n \n";
        }else{
            cout << "you have a normal weight! \n \n";
        }
        //ask user to continue or not
        cout << "Do you want to continue?\ny for yes | other key for no: ";
        cin >> choice;
        if (choice == 'y'){continue;} else{break;}
    }

    return 0;
}
