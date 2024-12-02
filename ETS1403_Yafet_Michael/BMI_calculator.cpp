#include <iostream>
using namespace std;
int main () {
    float height, weight, BMI;
    label1:
    cout<<"Input Your Height in meters ";
    cin>>height;
    if (height <= 0) {
        cout<<"Your input is invalid";
        goto label1;
    }
    cout<< "Enter Your Weight in killograms ";
    cin>>weight;
    BMI = weight/(height*height);
    cout<<"Your BMI is "<< BMI <<endl;
    if (BMI > 25) {
        cout<<"You are over weight"<<endl;
    } else if ((BMI > 18.5) && (BMI <= 25)) {
        cout<<"You have a normal weight"<<endl;
    } else {
        cout<<"You are underweight"<<endl;
    }
    cout<<"If you want to use again press 'y' or press any to terminate"<<endl;
    char choice;
    cin>>choice;
    if (choice == 'y') {
        goto label1;
    }
    return 0;
}