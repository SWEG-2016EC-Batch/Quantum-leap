// For this program I am assuming we are using the national work week which is 40 hours and anything above that is taken as overtime.
#include <iostream> 
using namespace std;
int main() {
    double weekly_working_hours, bonus_rate_per_hour, base_salary, gross_salary, net_salary, bonus_payment, pension, tax, taxRate;
    cout<<"This is a salary calculator, and I need some information to get started"<<endl;
    cout<<"How many hours do you work a week? ";
    cin>>weekly_working_hours;
    cout<<"What your bonus rate per hour in percentage? ";
    in:
    cin>>bonus_rate_per_hour;
    if (bonus_rate_per_hour < 0) {
        cout<<"Invalid input, put put an integer above 0 as it's a percentage of profit!"<<endl;
        goto in;
    }
    cout<<"What is your base salary? ";
    cin>>base_salary;
    if (base_salary <= 200) {
        taxRate = 0;
    } else if (base_salary > 200 && base_salary <= 600) {
        taxRate = 0.1;
    } else if (base_salary > 600 && base_salary <= 1200) {
        taxRate = 0.15;
    } else if (base_salary > 1200 && base_salary <= 2000) {
        taxRate = 0.2;
    } else if (base_salary > 2000 && base_salary <= 3500) {
        taxRate = 0.25;
    } else if (base_salary > 3500) {
        taxRate = 0.3;
    }
    bonus_payment = (weekly_working_hours - 40) * ((base_salary/160) * (bonus_rate_per_hour/100));
    gross_salary = base_salary + bonus_payment;
    pension = base_salary * 0.05;
    tax = base_salary * taxRate;
    net_salary = gross_salary - (pension + tax);
    cout<<"Your bonus payment is "<<bonus_payment<<endl<<"Your gross salary is "<<gross_salary<<endl<<"Finally, your net salary is "<<net_salary;
    return 0;
}