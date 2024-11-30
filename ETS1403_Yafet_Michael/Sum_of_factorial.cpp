#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    int temp = number; 
    while (temp > 0) {
        int digit = temp % 10; 

        
        int fact = 1;
        for (int i = 1; i <= digit; ++i) {
            fact *= i;
        }

        sum += fact; 
        temp /= 10; 
    }

    cout << "The sum of the factorial of the digits of " << number << " is: " << sum << endl;

    return 0;
}
