#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int num;
   do
   {
      float weight,height,suggestedWeight,yourBodyMassIndex;
      int counter = 1;
       // Input weight with validation
        linefirst:
            cout<< " please enter your weight in kilograms ?";
            cin>>weight;         
               if ( cin.fail() || weight < 0 ) 
                 {
                  cin.clear();
                  cin.ignore();
                  counter++;
                     if ( counter <= 2 )  
                       {               
                         cout << " Invalid input, you have only one chance Please inter valid input " <<endl;
                       }
                     if ( counter == 3 )
                        {
                            cout << " You are completed your chance ";
                            break; // Exit the program if input failed too many times
                        }
                          goto linefirst;
                        }
                  // Input height with validation
                  int temp = 1;
                linesecond: 
                        cout<<"please enter your height in meters ?";
                        cin>>height;
                  if ( cin.fail() || height <= 0 ) 
                    {
                      cin.clear();
                      cin.ignore();
                      temp++;
                      if ( temp <= 2 )  
                        {
                          cout << " Invalid input, you have only one chance Please inter valid input " <<endl;
                         } 
                      if ( temp == 3 )
                        {
                            cout << " You are completed your chance ";
                            break; // Exit the program if input failed too many times
                        } 
                          goto linesecond;                                    
                        }
                // Calculate BMI                       
       yourBodyMassIndex = weight/(height*height);
          cout << fixed << setprecision(2); // To format floating-point numbers to 2 decimal places
            if(yourBodyMassIndex<18.5)
             {
                  suggestedWeight = 18.5*height*height; //determines the suggested weight if the person is underweight

                  suggestedWeight -= weight;

                    cout<<"your body mass index is : "<<yourBodyMassIndex<<endl;

                    cout<<"you need to gain "<<suggestedWeight<<"kilograms"<<endl;
             } 
        else if( yourBodyMassIndex > 24.9 )
             {
                suggestedWeight = 24.9*height*height;
                weight -=suggestedWeight;
                    cout<<"your body mass index is : "<<yourBodyMassIndex<<endl;

                    cout<<"you need to lose "<<weight<<"kilograms"<<endl;
            }
        else{
               cout<<"Your body mass index is : "<<yourBodyMassIndex<<"you are in a normal shape.keep going!"<<endl;
           } 
                     // Continue or terminate the program
                     int var = 1;
                 linethird:
                           cout << " Please inter 1 to continue or 0 to terminate"<<endl;
                           cin >> num;
                    
                       if ( cin.fail() || (num != 1 && num != 0) ) 
                         {
                            cin.clear();
                            cin.ignore();
                            var++;
                                if ( var == 3 )
                                  {
                                    cout << " You are completed your chance ";
                                    break;
                                  }
                               cout << " Invalid input, you have only one chance Please inter valid input " <<endl; 
                               goto linethird;                                                                    
                        }                                                                  
          } while ( num == 1 );
    return 0;
}
