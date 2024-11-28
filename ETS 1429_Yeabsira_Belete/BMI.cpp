#include <iostream>

using namespace std;

int main(){
  int num;
   do
   {
      float weight,height,suggestedWeight,yourBodyMassIndex,counter = 1;
        line10:
            cout<< " please enter your weight in kilograms ?";
            cin>>weight;         
               if ( cin.fail() ) 
                 {
                  cin.clear();
                  cin.ignore();
                  counter++;
                     if ( counter <= 2 )  
                       {               
                         cout << " you have only one chance Please inter valid input " <<endl;
                       }
                     if ( counter == 3 )
                        {
                            cout << " You are completed your chance ";
                            break;
                        }
                          goto line10;
                        }                      
                line28: 
                        cout<<"please enter your height in meters ?";
                        cin>>height;
                  if ( cin.fail() ) 
                    {
                      cin.clear();
                      cin.ignore();
                      counter++;
                      if ( counter <= 2 )  
                        {
                          cout << " you have only one chance Please inter valid input " <<endl;
                         } 
                      if ( counter == 3 )
                        {
                            cout << " You are completed your chance ";
                            break;
                        } 
                          goto line28;                                    
                        }
                                       
       yourBodyMassIndex = weight/(height*height);
            if(yourBodyMassIndex<18.5)
             {
                  suggestedWeight = 18.5*height*height; //determines the suggested weight if the person is underweight.

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
               cout<<"your body mass index is : "<<yourBodyMassIndex<<"you are in a normal shape.keep going!"<<endl;
           } 
                  for ( int counter = 1; counter <= 2; counter++ )
                       {       
                           cout << " Please inter 1 to continue or 0 to terminate"<<endl;
                           cin >> num;
                    
                       if ( cin.fail() ) 
                         {
                            cin.clear();
                            cin.ignore();
                                if ( counter == 2 )
                                  {
                                    break;
                                  }
                               cout << " you have only one chance Please inter valid input " <<endl;                                       
                        } 
                        else if ( num == 0 )
                               {
                                  break;
                               } 
                        else {
                            if ( counter == 2 )
                                  {
                                    break;
                                  }
                               cout << " you have only one chance Please inter valid input " <<endl;                              
                        }                        
                      }
    } while ( num == 1 );
    return 0;
}
