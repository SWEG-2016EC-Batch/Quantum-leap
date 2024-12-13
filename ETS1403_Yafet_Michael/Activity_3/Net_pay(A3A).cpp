#include <iostream> 
using namespace std;
int main() {
    double base_salary,weekly_working_hours,bonus_rate_per_hour,taxRate;
    cout<<"Working hours per week?";
    cin>>weekly_working_hours;
    cout<<"What is your bonus rate per hour(percentage)? ";
    label1:
    cin>>bonus_rate_per_hour;
    if (bonus_rate_per_hour < 0) {
        cout<<"Your input is invalid. It should postive integer"<<endl;
        goto label1;
    }
    cout<<"What is your base salary? ";
    cin>>base_salary;
    if(base_salary<=200) {
        taxRate=0;
    }else if (base_salary>200 && base_salary<=600) {
        taxRate=0.1;
    }else if(base_salary>600 && base_salary<=1200) {
        taxRate=0.15;
    }else if(base_salary>1200 && base_salary<=2000) {
        taxRate=0.2;
    }else if(base_salary>2000 && base_salary<=3500) {
        taxRate=0.25;
    }else if(base_salary > 3500) {
        taxRate=0.3;
    }
    double bonus_payment,gross_salary,pension,tax,net_salary;
    bonus_payment=(weekly_working_hours-40)*((base_salary/160)*(bonus_rate_per_hour/100));
    gross_salary=base_salary+bonus_payment;
    pension=base_salary*0.05;
    tax=base_salary*taxRate;
    net_salary=gross_salary-(pension+tax);
    cout<<"Your bonus payment is "<<bonus_payment<<endl;
    cout<<"Your gross salary is "<<gross_salary<<endl;
    cout<<"Finally, your net salary is "<<net_salary;
    return 0;
}
