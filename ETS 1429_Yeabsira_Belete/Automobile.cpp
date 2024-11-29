#include <iostream>
#include <cmath>
using namespace std;
int main () {
   float num_of_gallon,totalmile,num;
   const int mile_per_gallon = 25; //In the U.S.,The average across all new vehicles sold is approximately 24-28 MPG as of recent years, depending on the mix of cars, trucks, and SUVs.
   
      do{
        int counter = 1;
        linefirst:
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
              cout << " you have only one chance please try correcly" <<endl;
              cout << " Please inter num only greater than 0" <<endl;
                goto linefirst;
        }
         else {
              totalmile = num_of_gallon * mile_per_gallon;
               cout << totalmile << " mile per " << num_of_gallon << " gallon an automobile drive with out refuel" <<endl;
         }
          int var = 1;
                 linesecond:
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
                               goto linesecond;                                                                    
                        }  
               } while ( num == 1);
    return 0;
}
