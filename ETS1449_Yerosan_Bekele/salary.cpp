#include <iostream>
using namespace std;

int main(){
    string name;
    float weeklyHours, bonusRate, baseSalary, grossSalary, bonusPayment, netSalary, pensionAmount, taxAmount;
    const float pension = 0.05, tax = 0.15;

    cout << "Enter employee first name: ";
    cin >> name;

    cout << "Enter the base salary: ";
    cin >> baseSalary;

    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    cout << "Enter bonus rate (in percentage): ";
    cin >> bonusRate;

    //assuming all the inputs are valid

    bonusPayment = weeklyHours * (bonusRate / 100) * baseSalary;

    grossSalary = baseSalary + bonusPayment;

    pensionAmount = baseSalary * pension;
    taxAmount = grossSalary * tax;

    netSalary = grossSalary - (pensionAmount + taxAmount);

     cout << "Employee Name: " << name << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pensionAmount << endl;
    cout << "Tax Deduction: $" << taxAmount << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
