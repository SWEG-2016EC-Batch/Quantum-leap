#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed<<setprecision(2);
    while (true){
    string nameOfEmployee;
    float bonusRatePerHour,baseSalary,netSalary,paymentDeductions,bonuspayment,grossSalary;
    int counter=0,choice,weeklyWorkingHours;


    cout<<"Enter name of the employee ?"<<endl;
    cin>>nameOfEmployee;
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
    }   counter=0;
        thirdLabel:
        cout<<"Enter Bonus rate of the employee ?"<<endl;
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
       bonuspayment = bonusRatePerHour * baseSalary;
       grossSalary = baseSalary + bonuspayment;
       paymentDeductions = 0.05 * baseSalary + grossSalary * 0.15; // pension rate – 5%,tax - 15%. 
       netSalary = grossSalary - paymentDeductions;
       cout<<"Name : "<<nameOfEmployee<<"\nNet Salary : "<<netSalary<<"\nGross salary : "<<grossSalary<<"\nBonus payment : "<<bonuspayment<<endl;
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
}
return 0;
}
