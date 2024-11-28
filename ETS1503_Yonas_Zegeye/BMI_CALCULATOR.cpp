#include <iostream>
#include <iomanip> //To set the setprecision of the BMI result
using namespace std;
int main(){
     while(true){
        int counter1=0,attemptCount=3,counter2=counter1,counter3=counter1,counter4=counter1,choice;
        float weight,height,suggestedWeight,yourBodyMassIndex;
        firstLabel:
        cout<<"please enter your weight in kilograms ?"<<endl;
        cin>>weight;
          //Validate user input 
     if (cin.fail()||weight<0){
         counter1++;
         cin.clear();
         cin.ignore();
            if(counter1==1 || counter1 ==2){
                cout<<"pLease input positive integer value only"<<endl;
                cout<<"You have"<<attemptCount-counter1<<"tries remaining"<<endl;
                goto firstLabel;
         }
            else if(counter1 == 3){
                cout<<"you have used all your attempts!"<<endl;
                break;
        }
      }
            secondLabel:
            cout<<"please enter your height in meters ?"<<endl;
            cin>>height;

    if (cin.fail() || height <= 0 ){
         counter2++;
         cin.clear();
         cin.ignore();
        if(counter2 == 1 || counter2 == 2){
             cout<<"pLease input positive integer value only"<<endl;
             cout<<"You have"<<attemptCount-counter2<<"tries remaining"<<endl;
             goto secondLabel;
         }
        else if(counter2 == 3){
            cout<<"you have used all your attempts!"<<endl;
            break; // Exit the loop after 3 failed attempts
        }
   }
        yourBodyMassIndex = weight/(height*height);
        // Format floating-point numbers to 2 decimal places  
        cout<<fixed<<setprecision(2); // To format floating-point numbers to 2 decimal places.
        if(yourBodyMassIndex<18.5){
            suggestedWeight = 18.5*height*height; //determines the suggested weight if the person is underweight.
            suggestedWeight -= weight;
            cout<<"your body mass index is : "<<yourBodyMassIndex<<endl;
            cout<<"you are under weight! you need to gain "<<suggestedWeight<<"kilograms"<<endl;
        } 
        else if(yourBodyMassIndex>24.9){
            suggestedWeight = 24.9*height*height;
            weight -=suggestedWeight;
            cout<<"your body mass index is : "<<yourBodyMassIndex<<endl;
            cout<<"you are overweight! you need to lose "<<weight<<"kilograms"<<endl;
        }
        else{
            cout<<"you are in normal weight! your body mass index is : "<<yourBodyMassIndex<<"keep going!"<<endl;
        }
            thirdLabel:
            cout << "Do you want to calculate again?\n press 1 to continoue 0 to exit: "<<endl;
            cin >> choice;

    if(cin.fail()){
            cin.clear();
            cin.ignore();
            counter3++;
        if(counter3==1 || counter3 ==2){
                 cout<<"pLease input 1 to continue or 0 to exit"<<endl;
                 goto thirdLabel;
        }
       else if(counter3 == 3)
      {
                cout<<"you Entered wrong input 3 times!"<<endl;
                break;
      }
    }
    else if (choice == 1){
                goto firstLabel;
        }
    else if (choice == 0){
           break; // Exit the loop after 3 failed attempts
        }
        else {
            counter4++;
            if (counter4==1||counter4==2){
                    cout<<"please input 1 to continue or 0 to exit"<<endl;
                    goto thirdLabel;
            }
            else if(counter4==3){
                    break;
            }
        }
  }
}
