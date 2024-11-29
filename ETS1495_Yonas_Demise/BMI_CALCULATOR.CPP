#include <iostream>

using namespace std;

int main() {

    float weight,height,body_mass_index;
    char answer;
    while(true) {
            label_1:
        cout<<"please enter the weight of  a person:"<<endl;
        cin>>weight;
        if(cin.fail() || weight<=0) {
            cout<<"please enter a positive value."<<endl;
            cin.clear();
            cin.ignore();
            goto label_1;
        }
        label_2:
        cout<<"please enter the height of a person:"<<endl;
        cin>>height;
        if(cin.fail() || height<=0) {
            cout<<"please enter a positive value."<<endl;
            cin.clear();
            cin.ignore();
            goto label_2;
        }
        body_mass_index=weight/(height*height);
        if(body_mass_index<18) {
            cout<<"your body mass index is: "<<body_mass_index<<", you are underweight!"<<endl;
        } else if(body_mass_index>25) {
        cout<<"your body mass index is: "<<body_mass_index<<", you are overweight!"<<endl;
        } else {
        cout<<"your body mass index is: "<<body_mass_index<<", your weight is normal."<<endl;
        }
        label_3:
            cout<<"do you want to calculate again?\n say 'Y' for yes and 'N' for no"<<endl;
            cin>>answer;
            if(answer=='Y') {
                goto label_1;
            } else if(answer=='N') {
            cout<<"Have a nice day!"<<endl;
            break;
            } else {
            cout<<"please answer 'Y' for yes or 'N' for no."<<endl;
            goto label_3;
            }
    }
}

