#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    line7:
    cout << "Enter the number you want to manipulate: ";
    cin >> num;
    int rem, reverse = 0, number_of_digits = 0, prod_even_digits = 1, first, last, first_last_sum, swapped = 0, count;
    int sum_of_factorials = 0;
    bool is_strong;
    int sum_of_divisors = 0;
    bool is_true = true;
    int factorial;
    
    int temp1 = num;
    int temp2 = num;
    int temp3 = num;
    int temp4 = num;
    int temp5 = num;
    int temp6 = num;
    int temp7 = num;

    //first we need the number of the digits
    do { 
        temp1 /= 10;
        number_of_digits += 1;
    }while(temp1 > 0);
    
    //reverse of the number
    int counter = number_of_digits - 1;
    while (temp2 > 0){
        rem = temp2 % 10;
        for (int i = 0; i < counter; i++){
            rem *= 10;
        }
        reverse += rem;
        counter--;
        temp2 /= 10;
    }

    //product of even digits
    while (temp3 > 0){
        rem = temp3 % 10;
        if (rem % 2 == 0){
            prod_even_digits *= rem;
        }
        temp3 /= 10;
    }
    
    //print fist and last digit and find their sum
    counter = number_of_digits;
    while (temp4 > 0){
        if (counter == number_of_digits){
            last = temp4 % 10;
        }else if (counter == 1){
            first = temp4 % 10;
        }
        counter--;
        temp4 /= 10;
    }
    first_last_sum = first + last;
    
    //swap first and last
    last1 = last;
    counter = number_of_digits;
    
    while (temp5 > 0){
        if (counter == number_of_digits){;
            for (int i = 0; i < counter-1; i++){
                last1 *= 10;
            }
            swapped += last1;
            temp5 /= 10;
            counter--;
            count = number_of_digits - counter;
            continue;
        }if (counter == 1){
            swapped += first; 
            break;
        }
        rem = temp5 % 10;
        for (int i = 0; i < count; i++){
            rem *= 10;
        }
        swapped += rem;
        counter--;
        count++;
        temp5 /= 10; 
    }
    
    //check whether palindrome or not
    bool is_palindrome;
    if (reverse == num){
        is_palindrome = true;
    }else{is_palindrome = false;}

    //frequency of each digit
    bool show_frequency = false;
    line100:
    if (show_frequency){
        cout << "Digit\tFrequency\n";
        for (int digit = 0; digit <= 9; ++digit) {
            temp6 = num;
            count = 0;
            while (temp6 > 0) {
                if (temp6 % 10 == digit) {
                    ++count;              
                }
                temp6 /= 10;  
            }
            if (count > 0) {
                cout << digit << "\t" << count << "\n";
            }
        }
        show_frequency = false;
        goto line208;
    }
    //check if number is strong or not
    

    while (temp7 > 0){
        factorial = 1;
        rem = temp7 % 10;
        for (int i = 1; i <= rem; i++){
            factorial *= i;
        }
        sum_of_factorials += factorial;
        temp7 /= 10;
    }
    if (sum_of_factorials == num){
        is_strong = true; 
    }else{
        is_strong = false;
    }

    //check whether number is perfect or not
    
    bool is_perfect;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }
    if (sum_of_divisors == num) {
        is_perfect = true;
    } else {
        is_perfect = false;
    }

    //building menu
    int user_choice;
    while (is_true){
        line154:
        cout << "--------MENU--------\n";
        cout << "press \'1\' : To see the number of digits  \n";
        cout << "press \'2\' : To reverse the number\n";
        cout << "press \'3\' : To see the product of even digits\n";
        cout << "press \'4\' : To see the fist and last digits and their sum\n";
        cout << "press \'5\' : To swap the first and last number\n";
        cout << "press \'6\' : To know if the number is palindrome\n";
        cout << "press \'7\' : To see the frequency of the digits\n";
        cout << "press \'8\' : To know if the number is strong\n";
        cout << "press \'9\' : To know if the number is perfect\n";
        cout << "press \'0\' : To change number\n";
        cout << "----------------------\n";
        cout << "Enter your choice: ";
        cin >> user_choice;
        
        //check for validity of the input
        if (cin.fail()){
            cout << "Please enter a valid input!!\n";
            cin.clear();
            cin.ignore();
            goto line154;
        }

        switch (user_choice){
            case 1:
                cout << "The number of digits for " << num <<" is: " << number_of_digits << endl;
                break;
            case 2:
                cout << num << " reversed is: " << reverse << endl;
                break;
            case 3:
                cout << "The product of evens of " << num << " is: " << prod_even_digits << endl;
                break;
            case 4:
                cout << "Number: " << num << endl;
                cout << "First digit: " << first << endl;
                cout << "Last digit: " << last << endl;
                cout << "sum of first and last digit is: " << first_last_sum << endl;
                break;
            case 5:
                cout << "Number: " << num << endl;
                cout << "First and last digit swapped is: " << swapped << endl;
                break;
            case 6:
                if (is_palindrome){
                    cout << num << " is palindrome!!!\n";
                }else{
                    cout << num << " is NOT palindrome!!!\n";
                }
                break;
            case 7:
                show_frequency = true;
                goto line100;
                line208:
                break;
            case 8:
                if (is_strong){
                    cout << num << " is strong!!!\n";
                }else{
                    cout << num << " is NOT strong!!!\n";
                }
                break;
            case 9:
                if (is_perfect){
                    cout << num << " is perfect!!!\n";
                }else{
                    cout << num << " is NOT perfect!!!\n";
                }
                break;
            case 0:
                cin.clear();
                cin.ignore();
                goto line7;
        }
        char choice;
        cout << "Do you want to continue (\'y\' for yes, others for no): ";
        cin >> choice;
        if (choice == 'y'){
            is_true = true;
        }else{
            cout << "Goodbye!";
            is_true = false;
        }
    }

    return 0;
}
