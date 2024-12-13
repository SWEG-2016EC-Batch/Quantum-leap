#include <iostream>
using namespace std;

int main(){
    float test, quiz, project, assignment, final_exam, total_mark;
    line6:
    cout << "Enter your test score (15%): ";
    cin >> test;

    if (cin.fail() || test < 0 || test > 15){
        cout << "Invalid input!! Try again \n";
        cin.clear();
        cin.ignore();
        goto line6;
    }
    line16:
    cout << "Enter your quiz score (5%): ";
    cin >> quiz;

    if (cin.fail() || quiz < 0 || quiz > 5){
        cout << "Invalid input!! Try again \n";
        cin.clear();
        cin.ignore();
        goto line16;
    }
    line26:
    cout << "Enter your project score (20%): ";
    cin >> project;

    if (cin.fail() || project < 0 || project > 20){
        cout << "Invalid input!! Try again \n";
        cin.clear();
        cin.ignore();
        goto line26;
    }
    line36:
    cout << "Enter your assignment score (10%): ";
    cin >> assignment;

    if (cin.fail() || assignment < 0 || assignment > 10){
        cout << "Invalid input!! Try again \n";
        cin.clear();
        cin.ignore();
        goto line36;
    }
    line46:
    cout << "Enter your final exam score (50%): ";
    cin >> final_exam;

    if (cin.fail() || final_exam < 0 || final_exam > 50){
        cout << "Invalid input!! Try again \n";
        cin.clear();
        cin.ignore();
        goto line46;
    }
    total_mark = test + quiz + project + assignment + final_exam;
    if (total_mark >= 90){
        cout << "A+ with score of: " << total_mark;
    }else if (total_mark >= 80){
        cout << "A with score of: " << total_mark;
    }else if (total_mark >= 75){
        cout << "B+ with score of: " << total_mark;
    }else if (total_mark >= 60){
        cout << "B with score of: " << total_mark;
    }else if (total_mark >= 55){
        cout << "C+ with score of: " << total_mark;
    }else if (total_mark >= 45){
        cout << "C with score of: " << total_mark;
    }else if (total_mark >= 30){
        cout << "D with score of: " << total_mark;
    }else{
        cout << "F with score of: " << total_mark;
    }

    return 0;
}
