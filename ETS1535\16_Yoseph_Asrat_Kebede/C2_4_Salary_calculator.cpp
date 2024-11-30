// For this program I am assuming we are using the national work week which is 48 hours and anything above that is taken as overtime.
#include <iostream> 
using namespace std;
int main() {
    string name; 
    double weekly_working_hours, bonus_rate_per_hour, base_salary, gross_salary, net_salary, bonus_payment, pension, tax;
    cout<<"This is a salary calculator, and I need some information to get started"<<endl;
    cout<<"What is your first name? ";
    cin>>name;
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
    bonus_payment = (weekly_working_hours - 48) * ((base_salary/192) * (bonus_rate_per_hour/100));
    gross_salary = base_salary + bonus_payment;
    pension = base_salary * 0.05;
    tax = base_salary * 0.15;
    net_salary = gross_salary - (pension + tax);
    cout<<"Well "<<name<<" ,your bonus payment is "<<bonus_payment<<endl<<"Your gross salary is "<<gross_salary<<endl<<"Finally, your net salary is "<<net_salary;
    return 0;
}