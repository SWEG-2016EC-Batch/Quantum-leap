#include <iostream>
using namespace std;

int main(){
    int num = 5, count = 1;
    char letter = 'A';
    //rectangle with numbers
    for (int i = 0; i < num; i++){
        for (int j = 1; j <= num; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << endl << "----------" << endl;
    //rectangle with capitals
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            cout << letter;
            letter++;
        }
        cout << endl;
    } 
    cout << endl << "----------" << endl;
    //right angle triangle with numbers

    for (int i = 0; i < num; i++){
        for (int j = 1; j <= count; j++){
            cout << j;
        }
        count++;
        cout << endl;
    }
    cout << endl << "----------" << endl;

    return 0;
}
