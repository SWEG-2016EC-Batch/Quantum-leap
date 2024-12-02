#include <iostream>

using namespace std;

int main()
{
   double base_salary,gross_salary,net_salary,bonus_payment,deductions;
   float bonus_rate,working_hours;
   char answer;
   string name;
   cout<<"please enter the first name of the employee: "<<endl;
   cin>>name;
   label1:
   cout<<"please enter the base salary:"<<endl;
   cin>>base_salary;
   if(cin.fail() || base_salary<=0) {
    cout<<"The input you entered is not correct!"<<endl;
    cin.clear();
    cin.ignore();
    goto label1;
   }
   label2:
   cout<<"please enter the weekly working hours:"<<endl;
   cin>>working_hours;
   if(cin.fail() || working_hours<0) {
    cout<<"The input you entered is not correct!"<<endl;
    cin.clear();
    cin.ignore();
    goto label2;
   }
   cout<<"please the bonus rate per hour:"<<endl;
   cin>>bonus_rate;
   if(cin.fail() || bonus_rate<0 || bonus_rate>1) {
     cout<<"The input you entered is not correct!, the bonus rate should be between 0 and 1"<<endl;
     cin.clear();
     cin.ignore();
   }
   bonus_payment=working_hours*bonus_rate;
   gross_salary=base_salary+bonus_payment;
   deductions=((base_salary*0.05) + (gross_salary*0.15));
   net_salary= gross_salary - deductions;
   cout<<"The gross salary of Mr/Mrs "<<name<<" is "<<gross_salary<<endl;
   cout<<"The bonus payment of Mr/Mrs "<<name<<" is "<<bonus_payment<<endl;
   cout<<"The net salary of Mr/Mrs "<<name<<" is "<<net_salary<<endl;
   label3:
   cout<<"do you want to calculate again?\n say 'Y' for yes and 'N' for no"<<endl;
   cin>>answer;
   if(answer=='Y') {
    goto label1;
   } else if(answer=='N') {
   cout<<"Have a Nice Day!"<<endl;
   } else {
   cout<<"please say 'Y' for yes and 'N' for no"<<endl;
   goto label3;
   }

   return 0;
}
