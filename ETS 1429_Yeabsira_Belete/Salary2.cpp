#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
 float base_salary,worked_hours,bonus_rate,bonus_pay,gross_salary,pension,tax_rate,tax,net_pay;
   cout<< " Enter your base salary: ";
   cin>> base_salary;
   cout<< " Enter your worked hours: ";
   cin>>worked_hours;
     if(worked_hours > 40)
       {
        cout<<" Enter your company bonus rate per hour: ";
        cin >>bonus_rate;
       }
        bonus_pay = (worked_hours-40) * bonus_rate * (base_salary/240); //out of 5days there are six weeks so 6*40==240(monthly).
        gross_salary = base_salary + bonus_pay;
        pension = base_salary * 0.07;
           if(base_salary >= 3500)
             {
                tax_rate = 0.3;
                tax = gross_salary * tax_rate;
             }
        else if(base_salary >= 2000)
             {
                tax_rate = 0.25;
                tax = gross_salary * tax_rate;
             }
        else if(base_salary >= 1200)
            {
                tax_rate = 0.2;
                tax = gross_salary * tax_rate;
            }
        else if(base_salary >= 600)
            {
                tax_rate = 0.15;
                tax = gross_salary * tax_rate;
            }
        else if(base_salary > 200)
            {
                tax_rate = 0.1;
                tax = gross_salary * tax_rate;
            }
        else if(base_salary <= 200)
            {
                tax_rate = 0.00;
                tax = 0;
            }
    cout<<fixed<<setprecision(2);
        net_pay = gross_salary - pension - tax;
           cout<<" Your net payment is: "<<net_pay<<" Thank You for your great work!";
  return 0;
}
