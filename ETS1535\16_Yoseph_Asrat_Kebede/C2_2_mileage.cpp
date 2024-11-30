#include <iostream> 
using namespace std;
int main() {
    int miles_left, gallons_left, MPG;
    cout<<"How many gallons of gas do you have in your tank? ";
    cin>> gallons_left;
    cout<<"How many miles can your automoblie travel per gallon of gas? ";
    cin>>MPG;
    miles_left = MPG * gallons_left;
    cout<<"You can travel "<<miles_left<<" miles without refueling.";
    return 0;
}