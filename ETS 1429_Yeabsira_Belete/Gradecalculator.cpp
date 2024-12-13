#include <iostream>
#include <string>
using namespace std;
int main () {
/* Write a program that read the various assessments, compute the total mark and print the
corresponding letter-grade based on the following scales.*/
/* Assessments
➢ Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%*/
   float test,quiz,project,assignment,final_exam,sum = 0;
       cout << "Enter Test out of 15%: ";
       cin >> test;
         if ( cin.fail())
           {
             cin.clear();
             cin.ignore();
               cout << " Please enter number only \n";
                   exit(0);
           }
       cout << " Enter Quiz out of 5%: ";
       cin >> quiz;
          if ( cin.fail())
           {
             cin.clear();
             cin.ignore();
               cout << " Please enter number only \n";
                   exit(0);
           }
       cout << " Enter Project out of 20%: ";
       cin >> project;
          if ( cin.fail())
           {
             cin.clear();
             cin.ignore();
               cout << " Please enter number only \n";
                   exit(0);
           }
       cout << " Enter Assignment out of 10%: ";
       cin >> assignment;
          if ( cin.fail())
           {
             cin.clear();
             cin.ignore();
               cout << " Please enter number only \n";
                   exit(0);
           }
       cout << " Enter Final exam out of 50%: ";
       cin >> final_exam;
         if ( cin.fail())
           {
             cin.clear();
             cin.ignore();
               cout << " Please enter number only \n";
                   exit(0);
           }
        else {
          sum += test+quiz+project+assignment+final_exam;
             if ( sum >= 90 && sum <= 100) 
               {
                cout << " Your grade is: A+";
               }
             else if ( sum >= 80)
                  {
                    cout << " Your grade is: A";
                  }
             else if ( sum >= 75)
                  {
                    cout << " Your grade is: B+";
                  }
             else if ( sum >= 60)
                  {
                    cout << " Your grade is: B";
                  }
             else if ( sum >= 55)
                  {
                    cout << " Your grade is: C+";
                  }
             else if ( sum >= 45)
                 {
                    cout << " Your grade is: C";
                 }
             else if ( sum >= 30)
                    {
                        cout << " Your grade is: D";
                    }
             else if ( sum < 30 && sum >= 0)
                   {
                    cout << " Your grade is: F";
                   }
             else {

             }
        }
       
    return 0;
}
