#include <iostream>
using namespace std;

int main() {
    float basic_salary, worked_hours, bonus_rate, bonus_per_hour, overtime_bonus_rate = 0, overtime_bonus_amount;
    float gross_salary, net_salary, pension_deduction, tax_deduction;
    const float pension = 0.07; 
    
    line9:
    cout << "Enter your basic salary: ";
    cin >> basic_salary;

    if (cin.fail() || basic_salary < 0){
        cout << "Please enter a valid input!\n";
        cin.clear();
        cin.ignore();
        goto line9;
    }
    line19:
    cout << "Enter your worked hours: ";
    cin >> worked_hours;

    if (cin.fail() || worked_hours < 0){
        cout << "Please enter a valid input!\n";
        cin.clear();
        cin.ignore();
        goto line19;
    }
    line29:
    cout << "Enter your bonus rate (in percentage): ";
    cin >> bonus_rate;

    if (cin.fail() || bonus_rate < 0 || bonus_rate > 100){
        cout << "Please enter a valid input!\n";
        cin.clear();
        cin.ignore();
        goto line29;
    }
    bonus_rate /= 100;
    bonus_per_hour = basic_salary * bonus_rate;

    //assuming all the inputs are valid
    if (worked_hours > 40) {
        line44:
        cout << "Enter your overtime bonus rate per hour (in percentage): ";
        cin >> overtime_bonus_rate;

        if (cin.fail() || overtime_bonus_rate < 0 || overtime_bonus_rate > 100){
            cout << "Please enter a valid input!\n";
            cin.clear();
            cin.ignore();
            goto line44;
        }
        overtime_bonus_rate /= 100;
        overtime_bonus_amount = overtime_bonus_rate * basic_salary;
    }
    gross_salary = basic_salary + (worked_hours * bonus_per_hour);
    if (worked_hours > 40) {
        gross_salary += (worked_hours - 40) * overtime_bonus_amount;
    }
    pension_deduction = basic_salary * pension;
    if (gross_salary <= 200) {
        tax_deduction = 0;
    }else if (gross_salary <= 600) {
        tax_deduction = gross_salary * 0.10;
    }else if (gross_salary <= 1200) {
        tax_deduction = gross_salary * 0.15;
    } else if (gross_salary <= 2000) {
        tax_deduction = gross_salary * 0.20;
    } else if (gross_salary <= 3500) {
        tax_deduction = gross_salary * 0.25;
    } else {
        tax_deduction = gross_salary * 0.30;
    }
    net_salary = gross_salary - pension_deduction - tax_deduction;

    cout << "Gross salary: " << gross_salary << endl;
    cout << "Bonus amount: " << worked_hours * bonus_per_hour << endl;
    cout << "Overtime bonus amount: " << (worked_hours - 40) * overtime_bonus_amount << endl;
    cout << "Pension deduction: " << pension_deduction << endl;
    cout << "Tax deduction: " << tax_deduction << endl;
    cout << "Net pay: " << net_salary << endl;

    return 0;
}
