#include <iostream>
using namespace std;
int main() {

int file_size,time,transmission_speed=960;
int days,hours,minutes;
char answer;
label:
cout<<"Please enter the size of the file in megabytes(MB): "<<endl;
cin>>file_size;
if(cin.fail() || file_size<0) {
    cout<<"Please enter a positive value."<<endl;
    cin.clear();
    cin.ignore();
    goto label;
    }
    file_size*=1048576;
    time=file_size/transmission_speed;
    days=time/86400;
    hours=time/3600;
    minutes=time/60;
    cout<<"The time that will take to send this file is: "<<days<<" days or "<<hours<<" hours or "<<minutes<<" minutes or "<<time<<" seconds"<<endl;;
label2:
    cout<<"Do you want to calculate again?\n Say 'Y' for yes and 'N' for no"<<endl;
    cin>>answer;
    if (answer=='Y') {
        goto label;
    } else if(answer=='N') {
       cout<<"Well,Have a Nice Day!"<<endl;
    } else {
    cout<<"You've entered incorrect input, please answer again."<<endl;
    cin.clear();
    cin.ignore();
    goto label2;
}

    return 0;

}

