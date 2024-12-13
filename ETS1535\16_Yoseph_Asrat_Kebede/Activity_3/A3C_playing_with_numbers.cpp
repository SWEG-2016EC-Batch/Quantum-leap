#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long int nums, pro = 1, sum = 0, remainder, sums = 0;
    long int temp, tempo;
    char option;
    long int count = 0, counter = 0, counter9 = 0, counter8 = 0, counter7 = 0, counter6 = 0, counter5 = 0, counter4 = 0, counter3 = 0, counter2 = 0, counter1 = 0, counter0 = 0;
    cout<<"Welcome to the programed designed to play with number"<<endl;
    cout<<"There are a selection ways in which you can manupilate numbers and below are your options to do so, please don't forget to use capitalized letters"<<endl;
    cout<<"If you want to print the reverse of a given number press A."<<endl;
    cout<<"If you want to count the number of digits of a given number press B."<<endl;
    cout<<"If you want to find the product of even digits of the a given number press C"<<endl;
    cout<<"If you want to print the first and the last digit of the number and find their sum press D"<<endl;
    cout<<"If you want to swap the first and the last digit of the number press E"<<endl;
    cout<<"If you want to check whether a number is palindrome or not press G"<<endl;
    cout<<"If you want to find the frequency of each digit in a given integer press H"<<endl;
    cout<<"If you want to check if a number is Strong or not press I"<<endl;
    cout<<"If you want to check whether a number is Perfect number or not press J"<<endl;
    cin>>option;
    cout<<"Now that you have made your choice, enter posetive integers "; 
    cin>>nums;
    temp = nums;
    tempo = nums;
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    long int numbs[count];
    long int Dnumbs[count];
    for (int i = 0; i < count; i++) {
        numbs[i] = tempo % 10;
        tempo /= 10;
    }

    switch (option) {
//option A
        case 'A':        
        cout<<"The digits you have input in reverse is: ";
        for (int i = 0; i < count; i++) {
            cout<<numbs[i];
        }
        break;
//option B
        case 'B':
        cout<<"\nThe number of digits in the given digits: "<<count<<endl;
        break;
//option C
        case 'C':
        for (int i = 0; i < count; i++) {
            if (numbs[i] % 2 == 0) {
                    pro *= numbs[i];
                }
        } 
        cout<<"The product of the given even numbers is "<<pro<<endl;  
        break;
//option D
        case 'D':
        cout<<"The first digit of the given number is "<<numbs[count-1]<<" and the last digit of the given number is "<<numbs[0]<<" ,and their sum is "<<numbs[0] + numbs[count-1]<<endl;
        break;
//option E
        case 'E':
        cout<<"The digits you have input with the first and last in reverse is: ";
        cout<<numbs[0];
        for (int i = 0; i < (count-2); i++) {
            if ((i!=0) || (i!=count-1)) {
                cout<<numbs[count-(i+2)];
            }
        }
        cout<<numbs[count-1];
        break;
//option G
        case 'G':
        for (int i = 0; i < count; i++) {
                Dnumbs[i] = numbs[count-(i+1)];
            }
            for (int i = 0; i < count; i++) {
                if (Dnumbs[i] == numbs[i]) {
                    counter++;
                }
            }
            if (counter == count) {
                cout<<"\nThe given number is a pallindrome"<<endl;
            } else {
                cout<<"\nThe given number is not a pallindrome"<<endl;
            }
        break;
//option H
        case 'H':
        for (int i = 0; i < count; i++) {
            switch (numbs[i]) {
                case 9:
                counter9++;
                break;
                case 8:
                counter8++;
                break;
                case 7:
                counter7++;
                break;
                case 6:
                counter6++;
                break;
                case 5:
                counter5++;
                break;
                case 4:
                counter4++;
                break;
                case 3:;
                counter3++;
                break;
                case 2:
                counter2++;
                break;
                case 1:
                counter1++;
                break;
                case 0:
                counter0++;
                break;
            }
        }
        cout<<"The frequency of each digit in a given integer is displayed below: "<<endl;
        cout<<"________________________________________________\n|\t\t\t|\t\t\t|\n|\tDigits\t\t|\tFreqency\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t0\t\t|\t"<<counter0<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t1\t\t|\t"<<counter1<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t2\t\t|\t"<<counter2<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t3\t\t|\t"<<counter3<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t4\t\t|\t"<<counter4<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t5\t\t|\t"<<counter5<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t6\t\t|\t"<<counter6<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t7\t\t|\t"<<counter7<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t8\t\t|\t"<<counter8<<"\t\t|\n|_______________________|_______________________|";
        cout<<"\n|\t\t\t|\t\t\t|\n|\t9\t\t|\t"<<counter9<<"\t\t|\n|_______________________|_______________________|"<<endl;
        break;
//option I
        case 'I':
        for (int i = 0; i < count; i++) {
            while (numbs[i]>=0) {
                remainder = numbs[i] % 10;
                unsigned long int fact = 1;
                while (remainder>=0) {
                    if (remainder>1) {
                        fact*= remainder;
                    }
                    remainder--;
                }
                sum += fact;
                numbs[i] /= 10;
                if (numbs[i] == 0) {
                    break;
                }
            }
        } 
        cout<< "The sum of the factorial of digits is " <<sum<<endl;
        if (nums == sum) {
            cout<<"The given number is a strong number"<<endl;
        } else {
            cout<<"The given number is not a strong number"<<endl;
        }
        break;
//option J
        case 'J':
        for (int i = 1; i <= sqrt(nums); i++) {
            if (nums%i == 0) {
                sums+=i;
                if (i != nums/i) {
                    sums += nums/i;
                }
            }
        }
        if(nums == sums - nums) {
            cout<<"The given number is a perfect number."<<endl;
        } else {
            cout<<"The given number is not a perfect number."<<endl;
        }
        break;
    }
    return 0;
}