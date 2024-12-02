#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    string name;
    int num;
    float weekly_working_hours,bonus_rate_per_hours,base_salary,gross_salary,net_salary,bonus_payment,pension_amount,tax_amount,punishment;
    // In different campany bonus_rate_per_hours is also different but let for specific campany I set 0.25(25%).
    const float pension = 0.05,tax = 0.15;

       do {      
    linefirst:  
       cout << " Dear employee please inter your name:" <<endl;
       cin >> name; 
    // Inter your weekly_working_hours only number.
       cout << "Dear " << name << " Please inter your weekly_working_hours: " <<endl;
       cin >> weekly_working_hours;
       if ( cin.fail() )
              {
                cin.clear();
                cin.ignore();
                   cout << " Please " << name << " enter number only " <<endl;
                   goto linefirst;
              }
    linesecond:
// Inter your base salary only number.
       cout << "Dear " << name << " Please enter your base_salary: " <<endl;
       cin >> base_salary;         
               if ( cin.fail() )
               {
                 cin.clear();
                 cin.ignore();
                   cout << " Please " << name << " enter number only " <<endl;
                   goto linesecond;
               }
              linethird:
        cout << "Dear " << name << " Please enter your campany bonus_rate_per_hours: " <<endl; 
        cin >> bonus_rate_per_hours; 
           if ( cin.fail() || (bonus_rate_per_hours < 0 || bonus_rate_per_hours > 1) )  
             {
               cin.clear();
               cin.ignore();
                 cout << " Please " << name << " enter number b/n 0 and 1 only " <<endl;
                   goto linethird;
             }                    
                   if ( weekly_working_hours > 48 )
                     { 
                    cout << fixed << setprecision(2); // To format floating-point numbers to 2 decimal places
                       bonus_payment  = bonus_rate_per_hours * (weekly_working_hours - 48) * (base_salary / 192);              
                       gross_salary = base_salary + bonus_payment;              
                       pension_amount = base_salary * pension; 
                       tax_amount = gross_salary * tax;              
                       net_salary = gross_salary - (pension_amount + tax_amount);
                       net_salary /= 4; // in our country most of the time salary give monthly b/c of this net_salary / 4(number of week monthly). 
                     }                                      
        else if ( weekly_working_hours < 48 )
             {
            cout << fixed << setprecision(2); // To format floating-point numbers to 2 decimal places
                punishment  = (48 - weekly_working_hours) * (base_salary / 192); // When the employee miss there own work or not exit.
                pension_amount = base_salary * pension;
                tax_amount = gross_salary * tax;
                net_salary = base_salary - (pension_amount + tax_amount + punishment);
                net_salary /= 4; // in our country most of the time salary give monthly b/c of this net_salary / 4(number of week monthly).
              }
            cout << "Dear " << name << " Your weekly net salary is: " << net_salary << " Thank you for your great work!" <<endl;
           cout << " Please Inter '1' to continue or '0' to terminate only"<<endl;
           cin >> num;
        
     } while( num == 1);
           
    return 0;
}
