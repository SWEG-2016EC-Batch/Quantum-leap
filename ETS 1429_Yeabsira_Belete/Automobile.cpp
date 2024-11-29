#include <iostream>
#include <cmath>
using namespace std;
int main () {
   float num_of_gallon,totalmile,num,mile_per_gallon;
   
   
      do{
        int counter = 1;
        linefirst:
        // inter num_of_gallon greater than 0
      cout << " num_of_gallon: ";
      cin >> num_of_gallon;       
        if ( cin.fail() || num_of_gallon < 1 )
        {
           cin.clear();
           cin.ignore();
           counter++;
             if ( counter == 3)
               {
                 cout << " You are completed your chance";
                 break;
               }
              
              cout << " Please inter num only greater than 0" <<endl;
              cout << " you have only one chance please try correcly" <<endl;
                goto linefirst;
        }
        int temp = 1;
        linesecond:
        // inter mile_per_gallon by consider the standard
      cout << " mile_per_gallon: ";
      cin >> mile_per_gallon;
       
        if ( cin.fail() || (mile_per_gallon <= 10 || mile_per_gallon >= 31) ) // mile_per_gallon as standard most of the time greater than 10 and less than 31.
        {
           cin.clear();
           cin.ignore();
           temp++;
             if ( temp == 3)
               {
                 cout << " You are completed your chance";
                 break;
               }
              
              cout << " mile_per_gallon as standard greater than 10 and less than 31 " <<endl;
              cout << " you have only one chance please try correcly" <<endl;
                goto linesecond;
        }
         else {
              totalmile = num_of_gallon * mile_per_gallon; // calculate totalmile
               cout << totalmile << " mile per " << num_of_gallon << " gallon an automobile drive with out refuel" <<endl;
         }
          int var = 1;
                 linethird:
                           cout << " Please inter 1 to continue or 0 to terminate"<<endl;
                           cin >> num;
                    //continue only inter 1 and terminate 0 other wise give another chance
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
               } while ( num == 1);
    return 0;
}
