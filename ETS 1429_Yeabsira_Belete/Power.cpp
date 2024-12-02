#include <iostream>
#include <cmath>
using namespace std;
int main () {
// Write a program that find the result of the expression pow (x,y) where the value of X and Y are entered by the user.
   float value_of_base, value_of_exponent, result,num,counter = 1;
     do
      {
     linefirst:
       cout<<"The value of base: ";
       cin>>value_of_base;
         if ( cin.fail()) //The value of x is can't be character(alphabet or other symbol only number ).
         {
            cin.clear();
            cin.ignore();
            counter++;        
         if ( counter == 3)
           {
             cout << " you are completed your chance";
             break;
           }
             cout << " The value you inter is invalid please inter num" <<endl;
             cout << " you have only one chance please try correcly" <<endl;
           goto linefirst;
         }
        int temp = 1;
        linesecond:
            cout<<"The value of exponent: ";
            cin>> value_of_exponent;
         if ( cin.fail()) //The value of y can't be character(alphabet or other symbol only number ) and also differnt from 0 when x is 0. 
           {
            cin.clear();
            cin.ignore();
            temp++;           
          
             if ( temp == 3)
           {
             cout << " you are completed your chance";
             break;
           }          
              cout << " The value you inter is invalid please inter num" <<endl;
              cout << " you have only one chance please try correcly" <<endl;
              goto linesecond;
           }
          if ( value_of_base == 0 && value_of_exponent <= 0 )
            {
               cout << " The value of 'y' can't be 0 and negative when 'x' is 0, inter positive value only" <<endl;
               goto linesecond;
            }
            //calculate the result using power formula.         
         else {           
            result=pow(value_of_base,value_of_exponent);
            cout<<"result: "<<result<<endl;
         }
         int var = 1;
                 line63:
                   //Terminate or continue ony the user inter 1 or 0.
                           cout << " Please inter only '1' to continue or '0' to terminate"<<endl;
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
                               goto line63;                                                                    
                        }                   
      } while ( num == 1 );
 
 return 0;
}
