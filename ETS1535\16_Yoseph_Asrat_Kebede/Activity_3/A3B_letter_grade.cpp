//Write a program that read the various assessments, compute the total mark and print the corresponding letter-grade based on the following scales.
#include <iostream>
using namespace std;

int main() {
    float test, quiz, assignment, project, final, mark;
    cout<<"This is a program to calculate your final grade"<<endl;
    om:
    cout<<"Enter your test mark out of 15: ";
    cin>>test;
    if (test < 0 || test > 15) {
            cout << "Invalid test mark. Please enter a mark between 0 and 15: ";
            goto om;
    }
    on:
    cout<<"Enter your quiz mark out of 5: ";
    cin>>quiz;
     if (quiz < 0 || quiz > 5) {
            cout << "Invalid quiz mark. Please enter a mark between 0 and 5: ";
            goto on;
    }
    op:
    cout<<"Enter your assignment mark out of 10: ";
    cin>>assignment;
    if (assignment < 0 || assignment > 10) {
            cout << "Invalid assignment mark. Please enter a mark between 0 and 10: ";
            goto op;
    }
    oq:
    cout<<"Enter your project mark out of 20: ";
    cin>>project;
    if (project < 0 || project > 20) {
            cout << "Invalid project mark. Please enter a mark between 0 and 20: ";
            goto oq;
    }
    os:
    cout<<"Enter your final exam mark out of 50: ";
    cin>>final;
    if (final < 0 || final > 50) {
        cout << "Invalid final exam mark. Please enter a mark between 0 and 50: ";
        goto os;
    }
    ot:
    if (cin.fail()) {
        cout << "Invalid input. Please enter a valid mark: ";
        cin.clear();
        cin.ignore();
        goto ot;   
    }
    mark = test + quiz + assignment + project + final;
    if (100>=mark && mark>=90) {
        cout<<"You got A+"<<endl;
    } else if (mark >=80) {
        cout<<"You got A"<<endl;
    } else if (mark >=75) {
        cout<<"You got B+"<<endl;
    } else if (mark >=60) {
        cout<<"You got B"<<endl;
    } else if (mark >=55) {
        cout<< "You got C+"<<endl;
    } else if (mark >=45) {
        cout<<"You got C"<<endl;
    } else if (mark >=30) {
        cout<<"You got D"<<endl;
    } else if ((mark >=0) && (mark <30)) {
        cout<<"You got F"<<endl;
    }
    return 0;
}