#include <iostream>
using namespace std;
int main() {
    float assignment,test,quiz,final,project;
    label0:
    
    cout<<"Enter your test mark (max=15): ";
    cin>>test;
    if (test<0 || test>15) {
            cout << "Invalid test mark. Please enter a mark between 0 and 15: ";
            goto label0;
    }
    label:
    cout<<"Enter your quiz mark (max=5): ";
    cin>>quiz;
     if (quiz<0 || quiz>5) {
            cout << "Invalid input it should be between 0 and 5: ";
            goto label;
    }
    label2:
    cout<<"Enter your assignment mark (max=10): ";
    cin>>assignment;
    if (assignment<0 || assignment>10) {
            cout << "Invalid input it should be between 0 and 10: ";
            goto label2;
    }
    label3:
    cout<<"Enter your project mark(max=20): ";
    cin>>project;
    if (project<0 || project>20) {
            cout << "Invalid input it should be between 0 and 20: ";
            goto label3;
    }
    label4:
    cout<<"Enter your final exam mark (max=50): ";
    cin>>final;
    if (final<0 || final>50) {
        cout << "Invalid input it must be between 0 and 50: ";
        goto label4;
    }
    label5:
    if (cin.fail()) {
        cout << "Invalid input. Please enter a valid mark: ";
        cin.clear();
        cin.ignore();
        goto label5;   
    }
    mark = test+quiz+assignment+project+final;
    if (100>=mark && mark>=90) {
        cout<<"You grade A+"<<endl;
    } else if (mark>=80) {
        cout<<"You grade A"<<endl;
    } else if (mark>=75) {
        cout<<"You grade B+"<<endl;
    } else if (mark>=60) {
        cout<<"You grade B"<<endl;
    } else if (mark>=55) {
        cout<< "You grade C+"<<endl;
    } else if (mark>=45) {
        cout<<"You grade C"<<endl;
    } else if (mark>=30) {
        cout<<"You grade D"<<endl;
    } else if ((mark>=0) && (mark<30)) {
        cout<<"You grade F"<<endl;
    }
    return 0;
}
