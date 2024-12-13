#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    long int number, product = 1, sumFactorials = 0, tempNum, tempReverse;
    char choice;
    int digitCount = 0;
    cout << "Welcome to the number manipulation program!\n";
    cout << "Choose an option from the menu below (use uppercase letters):\n";
    cout << "A: Reverse the digits of a number\n";
    cout << "B: Count the digits\n";
    cout << "C: Product of even digits\n";
    cout << "D: Sum of first and last digits\n";
    cout << "E: Swap first and last digits\n";
    cout << "G: Check for palindrome\n";
    cout << "H: Frequency of each digit\n";
    cout << "I: Check for Strong number\n";
    cout << "J: Check for Perfect number\n";

    cin >> choice;
    cout << "Enter a positive integer: ";
    cin >> number;

    tempNum = number;
    while (tempNum > 0) {
        tempNum /= 10;
        digitCount++;
    }

    long int digits[digitCount];
    tempNum = number;

    for (int i = digitCount - 1; i >= 0; i--) {
        digits[i] = tempNum % 10;
        tempNum /= 10;
    }

    switch (choice) {
        case 'A': {
            cout << "Reversed number: ";
            for (int i = digitCount - 1; i >= 0; i--) {
                cout << digits[i];
            }
            cout << endl;
            break;
        }
        case 'B': {
            cout << "Number of digits: " << digitCount << endl;
            break;
        }
        case 'C': {
            for (int i = 0; i < digitCount; i++) {
                if (digits[i] % 2 == 0) {
                    product *= digits[i];
                }
            }
            cout << "Product of even digits: " << product << endl;
            break;
        }
        case 'D': {
            int firstDigit = digits[0], lastDigit = digits[digitCount - 1];
            cout << "Sum of first and last digits: " << firstDigit + lastDigit << endl;
            break;
        }
        case 'E': {
            swap(digits[0], digits[digitCount - 1]);
            cout << "Number after swapping first and last digits: ";
            for (int i = 0; i < digitCount; i++) {
                cout << digits[i];
            }
            cout << endl;
            break;
        }
        case 'G': {
            bool isPalindrome = true;
            for (int i = 0; i < digitCount / 2; i++) {
                if (digits[i] != digits[digitCount - 1 - i]) {
                    isPalindrome = false;
                    break;
                }
            }
            cout << (isPalindrome ? "The number is a palindrome" : "The number is not a palindrome") << endl;
            break;
        }
        case 'H': {
            int frequency[10] = {0};
            for (int i = 0; i < digitCount; i++) {
                frequency[digits[i]]++;
            }
            cout << "Digit frequencies:\n";
            for (int i = 0; i < 10; i++) {
                cout << "Digit " << i << ": " << frequency[i] << endl;
            }
            break;
        }
        case 'I': {
            for (int i = 0; i < digitCount; i++) {
                int factorial = 1;
                for (int j = 1; j <= digits[i]; j++) {
                    factorial *= j;
                }
                sumFactorials += factorial;
            }
            cout << (sumFactorials == number ? "The number is a Strong number" : "The number is not a Strong number") << endl;
            break;
        }
        case 'J': {
            int sumDivisors = 0;
            for (int i = 1; i < number; i++) {
                if (number % i == 0) {
                    sumDivisors += i;
                }
            }
            cout << (sumDivisors == number ? "The number is a Perfect number" : "The number is not a Perfect number") << endl;
            break;
        }
        default: {
            cout << "Invalid option selected." << endl;
        }
    }

    return 0;
}
