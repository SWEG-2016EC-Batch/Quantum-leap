#include <iostream> 
using namespace std;
int main() {
    int x, y;
    float power = 1;
    cout<<"Enter the base X? ";
    cin>> x;
    cout<<"Enter the exponent Y?  ";
    cin>> y;

    if ((x == 0) && (y == 0)) {
        cout<<"The power of this number is undefined";
    } else if (y == 0) {
       cout<<"X to the power of Y is "<<power;
    } else if (y < 0) {
        for (int i = 0; i > y; i--) {
            power/=x;
        }
        cout<<"X to the power of Y is "<<power;
    } else {
        for (int i = 0; i < y; i++) {
            power*=x;
        }
        cout<<"X to the power of Y is "<<power;
    }
    return 0;
}
