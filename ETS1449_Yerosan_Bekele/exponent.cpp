#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    float pow = 1;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    // assuming both inputs are integer values
    
    if (num1 == 0 && num2 == 0){
        cout << "Indeterminate!\n";
        goto line28;
    }else if (num2 >= 0){
        for (int i = 0; i < num2; i++){
        pow *= num1;
        }
    }else{
        int temp = num2;
        for (temp; temp < 0; temp++){
            pow *= num1;
        }
        pow = 1 / pow;
    }
    cout << num1 << " the power of " << num2 << " is " << pow;
    line28:
    return 0;
}
