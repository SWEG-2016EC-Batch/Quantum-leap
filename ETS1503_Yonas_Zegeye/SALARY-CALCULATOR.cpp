#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed<<setprecision(2);
    while (true){
    float bonusRatePerHour,baseSalary,netSalary,bonuspayment,grossSalary,pension,incomeTax;
    int counter=0,choice,weeklyWorkingHours,extraWorkingHours;

    firstLabel:
    cout<<"Enter Base salary of the employee ? "<<endl;
    cin>>baseSalary;
    if(cin.fail()||baseSalary <= 0 ){
        cin.clear();
        cin.ignore();
        counter++;
        if(counter == 1){
            cout<<"Please enter a number greater than 0 only"<<endl;
            goto firstLabel;
        }
        else if (counter == 2)
        {
            cout<<"You entered invalid input!"<<endl;
            break;
        }
        
    }
    counter=0;
    secondLabel:
    cout<<"Enter the weekly working hours of the Employee ?"<<endl;
    cin>>weeklyWorkingHours;
    if(cin.fail()||weeklyWorkingHours < 0 ){
        cin.clear();
        cin.ignore();
        counter++;
        if(counter == 1){
            cout<<"Enter a number greater than 0 only"<<endl;
            goto secondLabel;
        }
        else if (counter == 2){
            cout<<"You entered invalid input!"<<endl;
            break;
        }
    }
       counter=0;
           if(weeklyWorkingHours > 40){
                     thirdLabel:
                     cout<<"Enter Bonus rate (per hour) of the employee ?"<<endl;
                     cin>>bonusRatePerHour;
                if(cin.fail()||bonusRatePerHour <= 0 || bonusRatePerHour > 1){
                       cin.clear();
                       cin.ignore();
                       counter++;
                         if(counter == 1){
                              cout<<"Bonus rate can't exceed 1 and be less than 0!"<<endl;
                              goto thirdLabel;
                         }
                        else if (counter == 2){
                                   cout<<"You entered invalid input!"<<endl;
                                   break;
                          }
                 }
                        extraWorkingHours = weeklyWorkingHours - 40;
                        bonuspayment = bonusRatePerHour * extraWorkingHours;
                        pension = 0.07 * baseSalary; // pension rate – 7% 
                        grossSalary = baseSalary + bonuspayment;
            }
            
            else{
                        pension = 0.07 * baseSalary; // pension rate – 7% 
                        grossSalary = baseSalary;// since there is no bonus for the employee who worked 40 hours per week.
            }
            
           if (baseSalary > 0 && baseSalary < 200){
                incomeTax = 0;
           }
           else if (baseSalary >= 200 && baseSalary < 600){
                      incomeTax = grossSalary * 0.1;
           }
           else if (baseSalary >= 600 && baseSalary < 1200){
                      incomeTax = grossSalary * 0.15;
           }
           else if (baseSalary >= 1200 && baseSalary < 2000){
                      incomeTax = grossSalary * 0.20;
           }
           else if (baseSalary >= 2000 && baseSalary < 3500){
                      incomeTax = grossSalary * 0.25;
           }
           else if (baseSalary >= 3500){
                      incomeTax = grossSalary * 0.30;
           }
           
          
            netSalary = grossSalary - pension-incomeTax;
            cout<<"\nNet Salary : "<<netSalary<<endl;
           
            cout<<"Do you want to continue ?"<<endl;
            counter=0;
            fourthLabel:
            cout<<"Press 1 to continue or 0 to exit."<<endl;
            cin>>choice;
            if(cin.fail()||choice < 0 ){
                 cin.clear();
                 cin.ignore();
                 counter++;
             if(counter == 1){
                 cout<<"Incorrect Input!"<<endl;
                 goto fourthLabel;
             }
             else if (counter == 2)
             {
                 cout<<"You entered invalid input!"<<endl;
                 break;
             }
        
           }
         else if (choice == 1){
                    goto firstLabel;
    }
         else if(choice == 0){
                    break;
    }
        else{
            cout<<"You entered invalid input!"<<endl;
             goto fourthLabel;
        }
        
}
return 0;
}