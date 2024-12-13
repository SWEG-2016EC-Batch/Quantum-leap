#include <iostream>
using namespace std;

int main(){
    while(true){
        double test,quiz,project,assignment,finalExam,totalMark,counter=0,choice;
        firstLabel:
        cout<<"Enter your test result from 15 point"<<endl;
        cin>>test;
        if (cin.fail()||test < 0 || test > 15){
                counter++;
                cin.clear();
                cin.ignore();
                if (counter == 2){
                        break;
                }
                else{
                      cout<<"The result must be between 0 - 15(inclusive)!"<<endl;
                      goto firstLabel;
                }
        }
        counter = 0;
        secondLabel:
        cout<<"Enter your quiz result from 5 point"<<endl;
        cin>>quiz;
        if (cin.fail()||quiz < 0 || quiz > 5){
                 counter++;
                 cin.clear();
                 cin.ignore();
                 if (counter == 2){
                         break;
                }
                 else{
                         cout<<"The result must be between 0 - 5(inclusive)!"<<endl;
                         goto firstLabel;
                 }
        }
                counter = 0;
                thirdLabel:
                cout<<"Enter your project result from 20 point"<<endl;
                cin>>project;
                if (cin.fail()||project < 0 || project > 20){
                       counter++;
                       cin.clear();
                       cin.ignore();
                       if (counter == 2){
                             break;
                         }
                       else{
                           cout<<"the result must be between 0 - 20(inclusive)!"<<endl;
                           goto thirdLabel;
                        }
                }
                        counter = 0;
                        fourthLabel:
                        cout<<"Enter your assignment result from 10 point"<<endl;
                        cin>>assignment;
                        if (cin.fail()||assignment < 0 || assignment > 10){
                                  counter++;
                                  cin.clear();
                                  cin.ignore();
                                  if (counter == 2){
                                     break;
                                  }
                                  else{
                                     cout<<"the result must be between 0 - 10(inclusive)!"<<endl;
                                     goto fourthLabel;
                                  }
                        }
                                  counter = 0;
                                  fifthLabel:
                                  cout<<"Enter your final exam result from 50 point"<<endl;
                                  cin>>finalExam;
                                  if (cin.fail()||finalExam < 0 || finalExam > 50){
                                       counter++;
                                       cin.clear();
                                       cin.ignore();
                                       if (counter == 2){
                                          break;
                                       }
                                       else{
                                          cout<<"the result must be between 0 - 50(inclusive)!"<<endl;
                                          goto fifthLabel;
                                       }
                                    }
                                    totalMark = test + quiz + project + assignment + finalExam;
                                    if (totalMark >= 90 && totalMark <= 100){
                                         cout<<"Your grade is : A+"<<endl;
                                    }
                                    else if (totalMark >= 80){
                                             cout<<"Your grade is : A"<<endl;
                                    }
                                    else if (totalMark >= 75){
                                             cout<<"Your grade is : B+"<<endl;
                                    }
                                    else if (totalMark >= 60){
                                             cout<<"Your grade is : B"<<endl;
                                    }
                                    else if (totalMark >= 55){
                                             cout<<"Your grade is : C+"<<endl;
                                    }
                                    else if (totalMark >= 45){
                                             cout<<"Your grade is : C"<<endl;
                                    }
                                    else if (totalMark >= 30){
                                             cout<<"Your grade is : D"<<endl;
                                    }
                                    else if (totalMark >= 0){
                                             cout<<"Your grade is : F"<<endl;
                                    }   counter = 0;
                                    sixthLabel:
                                    cout<<"Press 1 to continue or 0 to exit."<<endl;
                                    cin>>choice;
                                    if(cin.fail()||choice < 0 ){
                                     cin.clear();
                                     cin.ignore();
                                     counter++;
                                     if(counter == 1){
                                         cout<<"Incorrect Input!"<<endl;
                                         goto sixthLabel;
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
                                     else{
                                         cout<<"You entered invalid input!"<<endl;
                                          goto fourthLabel;
                                     }


    }
}
