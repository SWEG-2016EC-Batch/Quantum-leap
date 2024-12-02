#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double num1,num2,result;
    char answer;
    label1:
    cout<<"Please enter the base number: "<<endl;
    cin>>num1;
    if(cin.fail()) {
        cout<<"The input you entered is not correct, please enter a number only!"<<endl;
        cin.clear();
        cin.ignore();
        goto label1;
    }
    label2:
    cout<<"Please enter the exponent:"<<endl;
    cin>>num2;
    if(cin.fail()) {
        cout<<"The input you entered is not correct, please enter a number only!"<<endl;
        cin.clear();
        cin.ignore();
        goto label2;
    }
    if(num1==0 && num2<=0) {
        cout<<"ERROR!"<<endl;
    } else {
    result= pow(num1,num2);
    cout<<"The result is: "<<result<<endl;
    label3:
    }
    cout<<"Do you want to calculate again?\n say 'Y' for yes and 'N' for no"<<endl;
    cin>>answer;
    if(answer=='Y') {
        goto label1;
    } else if (answer=='N') {
    cout<<"Have a nice day!"<< endl;
    } else {
    cout<<"Please say 'Y' for yes and 'N' for no"<<endl;
    goto label3;
    }
    return 0;
}

