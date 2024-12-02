#include <iostream>
#include <cmath>
using namespace std;
int main (){

  bool calculateAgain = true;
  while (calculateAgain){

       long double baseNumber,exponentNumber,poweredNumber;
       int counter1=0,counter2=0,counter3=0,counter4=0,choice;
       firstLabel:
       cout<<"Enter the base of the number you want to be raised to the power?"<<endl;
       cin>>baseNumber;
        //validate input for base number
       if(cin.fail()){
           cin.clear();
           cin.ignore();
           counter1++;
           if (counter1 == 1){
                cout<<"Please try again!  enter a real number only!"<<endl;
                goto firstLabel;

           }
           else if (counter1 == 2){
                     cout<<"YOU ENTERED INVALID INPUT"<<endl;
                     break;
           }
           
       }
           secondLabel:
           cout<<"Enter the exponent of the number you want to raise the base to?"<<endl;
           cin>>exponentNumber;
           if (cin.fail()){
                cin.clear();
                cin.ignore();
                counter2++;
                if (counter2 == 1){
                      cout<<"Please try again! Enter a number value."<<endl;
                      goto secondLabel;

                 }

                 else if (counter2 == 2){
                            cout<<"YOU ENTERED INVALID INPUT"<<endl;
                            break;
                 }
           
        }        
              poweredNumber = pow(baseNumber,exponentNumber);
              // Check for special cases.
        if (baseNumber == 0 && exponentNumber < 0 ){
             cout<<"Error:0 raised to negative number is undefined"<<endl;
        }
        else if (baseNumber<0 && exponentNumber !=(int)exponentNumber ){
              cout<<"Error:negative base raised to non-integer number is undefined!"<<endl;
        }
        else if(baseNumber == 0 && exponentNumber == 0){
               cout<<"Error: 0 raised to 0 is undefined!"<<endl;
        }
        
        else{
            cout<<baseNumber <<"^"<<exponentNumber<<"= "<<poweredNumber<<endl;
        }
              thirdLabel:
              cout<<"press 1 to continue calculating and 0 to exit the program"<<endl;
              cin>>choice;
                     if (cin.fail()||choice < 0){
                          cin.clear();
                          cin.ignore();
                          counter3++;
                             if (counter3 == 1){
                                     cout<<"Please try again!  enter 1 to continue or 0 to exit!"<<endl;
                                     goto thirdLabel;

                             }
                             else if (counter3 == 2){
                                        cout<<"YOU ENTERED INVALID INPUT!"<<endl;
                                        break;
                             }
           
       }
       
                     else if (choice == 0){
                                calculateAgain=false;
                     }
                     else if (choice == 1){
                                goto firstLabel;
                     }
                     else{
                        counter4++;
                        if (counter4 == 1){
                             cout<<"Please try again!  enter 1 to continue or 0 to exit!"<<endl;
                             goto thirdLabel;
                        }
                        else if (counter4==2){
                                     cout<<"YOU ENTERED INVALID INPUT!"<<endl;
                                     break;
                        }
                     }
                 
  }

}
