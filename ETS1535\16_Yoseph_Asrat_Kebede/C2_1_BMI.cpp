#include <iostream>
using namespace std;
int main () {
    while (true) {
        float height, weight, BMI;
        un:
        cout<<"This is a BMI test"<<endl<<"Input Your Height in meters ";
        cin>>height;
        if (height == 0) {
            cout<<"Invalid input, please enter  your correct height";
            goto un;
        }
        cout<< "Enter Your Weight in killograms ";
        cin>>weight;
        BMI = weight / (height*height);
        cout<<"Your BMI is "<<BMI<<endl;
        if (BMI > 25) {
            cout<<"You are Over weight"<<endl;
        } else if ((BMI > 18.5) && (BMI <= 25)) {
            cout<<"You have a normal weight"<<endl;
        } else {
            cout<<"You are underweight"<<endl;
        }
        cout<<"If you wish to ask again choose y if not choose anything else"<<endl;
        char choice;
        cin>>choice;
        if (choice == 'y') {
            goto un;
        } else {
            break;
        }
    }
    return 0;
}