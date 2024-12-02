#include <iostream>
using namespace std;
int main(){
    while (true){

    int fileSize,transmitionTimeInSeconds,days,hours,minutes,seconds,tempFileSIze,choice;
    firstLabel:
    cout << "Enter the File-Size in MB(Mega Byte) you want, to calculate the transmission speed ?"<<endl;
    cin >> fileSize;
    if(cin.fail()||fileSize < 0){
                 cin.clear();
                 cin.ignore();
                 cout << "Please enter a number greaterthan or equal to 0 only"<<endl;
                 goto firstLabel;
    }
                 tempFileSIze = fileSize;//storing the user input in MB to use it later.
                 fileSize *= 1048576; //1MB = 1048576Bytes , 1 char = 1Byte in an 8 bit representation.
                 transmitionTimeInSeconds = fileSize / 960 ;
                 days = transmitionTimeInSeconds / 86400 ; //1 day = 86400 seconds
                 hours = (transmitionTimeInSeconds % 86400) /3600 ; //remaining hours from the day
                 minutes = (transmitionTimeInSeconds % 3600) / 60; //remainig minutes from hour
                 seconds = (transmitionTimeInSeconds % 3600) % 60 ; // remaining seconds from minutes
    
    cout<<"The total time it takes to transfer " << tempFileSIze << "MB is : " << days << " Days and "<< hours << " Hours and " << minutes << " Minutes and " << seconds << " Seconds." << endl;
    secondLabel:
    cout<<"Press 1 to continue and 0 to exit."<<endl;
    cin>>choice;
          if (cin.fail() || choice < 0){
                  cin.clear();
                  cin.ignore();
                  cout<<"PLEASE READ THE INSTRUCTION!!!"<<endl;
                  goto secondLabel;
          }
          else if (choice == 0){
                     break;
          }
          else if (choice == 1){
                    goto firstLabel;
          }
          else{
            cout<<"PLEASE READ THE INSTRUCTION!!!"<<endl;
            goto secondLabel;
          }
    }
}