#include <iostream>
using namespace std;
int main() {
    float base_salary,gross_salary,working_hour,bonus_rate,tax_rate,extra_hour=0;
    cout<<"Enter your base salary: ";
    cin>>base_salary;
    cout<<"Enter your working hours in hour: ";
    cin>>working_hour;
    cout<<"Enter your bonus rate in %: ";
    cin>>bonus_rate;

    label1:
   cout<<"Enter your base salary: "<<endl;
   cin>>base_salary;
   if(cin.fail() || base_salary<=0) {
    cout<<"The input you entered is not correct!"<<endl;
    cin.clear();
    cin.ignore();
    goto label1;
   }
    label2:
   cout<<"Enter your working hours in hour: "<<endl;
   cin>>working_hour;
   if(cin.fail() || working_hour<0) {
    cout<<"The input you entered is not correct!"<<endl;
    cin.clear();
    cin.ignore();
    goto label2;
   }
   label3:
   cout<<"Enter your bonus rate in %: "<<endl;
   cin>>bonus_rate;
   if(cin.fail() || bonus_rate<0) {
     cout<<"The input you entered is not correct!"<<endl;
     cin.clear();
     cin.ignore();
     goto label3;
   }

    if(working_hour>40){
        cout<<"Enter your extra working hour: ";
        cin>>extra_hour;
    }

    if(base_salary<200){
        tax_rate=0;
    }
    else if (base_salary<600)
    {
        tax_rate=0.1;
    }
    else if (base_salary<1200){
        tax_rate=0.15;           
    }
    else if (base_salary<2000){
        tax_rate=0.2;
    }
    else if (base_salary<3500){
        tax_rate=0.25;
    }
    else{
        tax_rate=0.3;
    }
    float net_salary,bonus,pension,tax;

    bonus_rate/=100;
    bonus=extra_hour*bonus_rate;
    gross_salary=base_salary+bonus;
    pension=gross_salary*0.7;
    tax=gross_salary*tax_rate;
    net_salary=gross_salary-pension-tax;
    
    cout<<"Your net salary is "<<net_salary;
    
    return 0;
}
