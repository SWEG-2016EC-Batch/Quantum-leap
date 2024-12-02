#include <iostream> 
using namespace std;
int main() {
    int miles_left, gallons_left, Mile_per_gallon;
    cout<<"How many gallons of gas do you have in your tank? ";
    cin>> gallons_left;
    cout<<"How many miles can your automoblie travel per gallon of gas? ";
    cin>>Mile_per_gallon;
    miles_left = Mile_per_gallon * gallons_left;
    cout<<"You can travel "<<miles_left<<" miles without refueling.";
    return 0;
}