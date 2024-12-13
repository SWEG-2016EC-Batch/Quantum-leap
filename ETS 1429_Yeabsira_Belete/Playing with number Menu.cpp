#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main () {
  int menu;
   cout << " Enter '1' to reverse the number \n";
   cout << " Enter '2' to count digits \n";
   cout << " Enter '3' to find the product of even digits \n";
   cout << " Enter '4' to print the first and the last digits \n";
   cout << " Enter '5' to swap the first and the last digits \n";
   cout << " Enter '6' to check pallindrom or not \n";
   cout << " Enter '7' to find the frequance of digits \n";
   cout << " Enter '8' to check number is strong or not \n";
   cout << " Enter '9' to check the number is perfect or not \n";
   cin >> menu;
     if ( menu==1)
       {
        cout << " You chose to reverse the number! \n";
         // Prints the reverses of the number (e.g. input = 4637215 Output=5217364).   
    while(true)
     {
     int num,remainder,result = 0;
        //linefirst:
        cout << " Enter the number: ";
        cin >> num;
          if ( cin.fail())
            {
                cin.ignore();
                cin.clear();
                   cout << " Please inter number only \n";
                      //goto linefirst;
                      break;
            }
          else {
            while( num != 0)
              {
                remainder = num % 10;
                result = (result * 10) + remainder;
                num /= 10;
              }
            }
               cout << " Reverse of the number is: "<<result<<"\n";
            char alph;
               cout << " Do you want to continue to reverse the number?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
     }
       }
   else if( menu==2)
        {
          cout << " You chose to count digits! \n";
           // Counts the number of digits in a given number (e.g. 23,498 has five digits)
    while(true){
  int num,remainder,counter = 0;
    cout << " Enter number: ";
    cin >> num;
      if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        }
      else {
             while( num != 0)
          {
            counter++;
            remainder = num % 10;
            num /= 10;
          }
            cout << " The number you entered are: "<<counter<<" digits. \n";
      } 
         char alph;
               cout << " Do you want to continue to count the digits?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
        }
    
        }
    else if ( menu==3)
        {
          cout << " You chose to find the product of even digits! \n";
           // Find the product of even digits of the a given number (e.g. input=4,923 prod=8).
    while(true)
      {
         int num,remainder,product = 1;
       cout << " Enter number: ";
       cin >> num;
        if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        }
        else {
               while( num != 0)
              {
                remainder = num % 10;
                   if ( remainder % 2 == 0)
                      {
                        product *= remainder;
                      }
                num /= 10;
              }
                cout << " The product of even digits are: "<<product<<"\n";
        }
                char alph;
               cout << " Do you want to continue to find the product of even digits?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
      }   
        }
      else if( menu==4)
          {
             cout << " You chose to find the first and the last digits! \n";
            // Prints the first and the last digit of the number and find their sum.
  while(true)
    {
      int num,remainder,counter = 0;
      cout << " Enter number: ";
      cin >> num;
        if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        }
           while( num != 0 )
              {
                counter++;
                remainder= num % 10;
                num /= 10;
                  if ( counter == 1)
                    {
                        cout << " The last digist is: "<<remainder<<"\n";
                    }
                 else if ( num == 0)
                    {
                        cout << " The first digit is: "<<remainder<<"\n";
                    }
              }
               char alph;
               cout << " Do you want to continue to find the first and the last digits?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
    }
          }
    else if ( menu==5)
         {
           cout << " You chose to swap the first and the last digits! \n";
          //Swap the first and the last digit of the number.
             while(true)
   {
      int num,first,last,temp,swap,count = 0;
      cout << " Enter number: ";
      cin >> num;
       if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        }         
        temp = num;
        last = temp % 10;
        count = (int)log10(temp);
            while(temp >= 10)
                {
                    temp /= 10;
                }
            first = temp;
            swap = (last*pow(10,count)+first) + (num-(first*pow(10,count)+last));
               cout << " The number after the swapping is:"<<swap<<"\n";
            char alph;
               cout << " Do you want to continue to swap the first and the last digits?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
   }
         }
    else if (menu==6)
          {
            cout << " You chose to check number is palindrome or not! \n";
            //Check whether a number is palindrome or not.
            while(true)
     {
     int num,temp,remainder,result = 0;
        //linefirst:
        cout << " Enter the number: ";
        cin >> num;
        temp = num;
          if ( cin.fail())
            {
                cin.ignore();
                cin.clear();
                   cout << " Please inter number only \n";
                      //goto linefirst;
                      break;
            }
          else {
            while( temp != 0)
              {
                remainder = temp % 10;
                result = (result * 10) + remainder;
                temp /= 10;
              }
            }
               if ( result==num)
                 {
                   cout << " The number is palindrome \n";
                 }
                else {
                  cout << " The number is not palindrome \n";
                }
            char alph;
               cout << " Do you want to continue to check whether the number is palindrome or not?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
     }
          }
    else if (menu==7)
         {
           cout << " You chose to to know the frequence of the digits! \n";
           // Find the frequency of each digit in a given integer and print in table format.
            while(true)
        {
       int num,temp,count;
   cout << " Enter number: ";
   cin >>num;
     if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        } 
      cout << "Digit\tFrequency\n";
        for (int digit = 0; digit <= 9; ++digit) {
          temp = num;
          count = 0;
            while (temp > 0) {
              if (temp % 10 == digit) {
                ++count;              
              }
                temp /= 10;  
            }
            if (count > 0) {
            cout << digit << "\t" << count << "\n";
           }
       }
          char alph;
               cout << " Do you want to continue to know the frequence of the digits?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
    }
         }
  else if ( menu==8)
       {
          cout << " You chose to check whether the number is strong or not! \n";
          //Check if a number is Strong or not.
           while(true)
  {
     int num,temp,sum = 0;
    cout << " Enter number: ";
    cin >>num;
     if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        } 
      else{
          temp = num;
       while(temp!= 0)
           {
             int remainder,product = 1;
                remainder = temp % 10;
                   while(remainder!=0)
                      {
                        product *= remainder;
                        remainder -= 1;
                      }
                        sum += product;
                        temp /= 10;
           }
             if ( sum == num)
               {
                 cout << " The number is strong \n";
               }
              else {
                cout << " The number is not strong \n";
              }
      }
   
       char alph;
               cout << " Do you want to continue to check numbers are strong or not?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
  }
       }
    else if (menu==9)
          {
            cout << " You chose to check the number is perfect or not! \n";
            while(true)
     {
//Check whether a number is Perfect number or not.
  int num,result,sum = 0;
    cout << " Enter number: ";
    cin >> num;
      if ( cin.fail())
        {
            cin.ignore();
            cin.clear();
              cout << " Please enter number only \n";
              exit(0);
        }
      else{
           for( int i=1; i<=num; i++)
          {
            if ( num % i == 0)
              {
                 sum += i;
              }
          }
              result = sum - num;
                if ( result==num)
                  {
                    cout << " The number is perfect \n";
                  }
                else{
                  cout << " The number is not perfect \n";
                }
      }
       
                char alph;
               cout << " Do you want to continue to check numbers are strong or not?(press y or Y) ";
               cin >> alph;
                  if ( alph != 'y' && alph != 'Y')
                    {
                        break;
                    }
     }
          }
    return 0;
}
