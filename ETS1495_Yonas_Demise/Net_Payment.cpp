#include<iostream>
using namespace std; 
int main() {
    float base_salary,work_hours,bonus_rate,gross_salary,bonus,pension,tax,net_salary,total_deductions,extra_working_hours;
    char answer;
    label1:
    cout<<"Enter the base salary of the person:"<<endl;
    cin>>base_salary;
    if(cin.fail() || base_salary<=0) {
        cout<<"Incorrect Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label1;
    }
    label2:
    cout<<"Enter the working hours of the person:"<<endl;
    cin>>work_hours;
    if(cin.fail() || work_hours<0) {
         cout<<"Incorrect Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label2;
    }
    if(work_hours>40) {
        label3:
        cout<<"Enter the extra working hours:"<<endl;
        cin>>extra_working_hours;
        if(cin.fail() || bonus_rate<0 || bonus_rate>1) {
         cout<<"Incorrect Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label3;
        }
        label4:
        cout<<"Enter the bonus rate per hour:"<<endl;
        cin>>bonus_rate;
        if(cin.fail() || bonus_rate<0 || bonus_rate>1) {
         cout<<"Incorrect Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label4;
    }
        bonus= extra_working_hours*bonus_rate;
    } else {
        bonus=0;
    }
    gross_salary=base_salary + bonus;
    pension=base_salary*0.07;
    if(base_salary<200) {
        tax=0;
    } else if(base_salary>=200 && base_salary<600) {
        tax= gross_salary*0.1;
    } else if(base_salary>=600 && base_salary<1200) {
        tax= gross_salary*0.15;
    } else if(base_salary>=1200 && base_salary<2000) {
        tax= gross_salary*0.2;
    } else if(base_salary>=2000 && base_salary<3500) {
        tax= gross_salary*0.25;
    } else {
        tax= gross_salary*0.3;
    }
    total_deductions= pension + tax;
    net_salary= (gross_salary)- total_deductions;
    cout<<"The net salary of the person is: "<<net_salary<<endl;
    cout<<endl;
    label5:
    cout<<"Do you want to calculate again?\n say 'Y' for yes and 'N' for no."<<endl;
    cin>>answer;
    if(answer=='Y') {
        goto label1;
    } else if(answer=='N') {
        cout<<"Have a Nice Day!"<<endl;
    } else {
 cout<<"Incorrect Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label5;
    }
    
    return 0;
}
