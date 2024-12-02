#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    while(true){

    int counter1=0,counter2=0,counter3=0,counter4=0,choice;
    cout<<fixed<<setprecision(2); //set the result mile in 2 decimal places.
    float capacityOfGallons,milePerGallon,mileCanDriven;

    firstLabel:
    cout<<"Enter capacity of your automobile tank in gallons?"<<endl;
    cin>>capacityOfGallons;

    if (cin.fail()||capacityOfGallons <= 0){
        cin.clear();
        cin.ignore();
        counter1++;
        if(counter1 == 1||counter1 == 2){
             cout<<"Please enter a positive number greater than 0 only!"<<endl;
             goto firstLabel;
        }
        else if (counter1 == 3){
             cout<<"You have used all your attempts"<<endl;
             break;
        }
        
    }
             secondLabel:
             cout<<"Enter how many miles your automobile can travel per gallons?"<<endl;
             cin>>milePerGallon;
             if(cin.fail()||milePerGallon <= 0){
                cin.clear();
                cin.ignore();
                counter2++;
                 if(counter2 == 1||counter2 == 2){
                     cout<<"Please enter a positive number greater than 0 only!"<<endl;
                     goto secondLabel;
             }
                 else if(counter2 == 3){
                       cout<<"You have used all your attempts"<<endl;
                       break;
          }
    
}
                        mileCanDriven=capacityOfGallons*milePerGallon;
                        // to output miles for the miles that are greater than two.
                        if(mileCanDriven >=2){
                             cout<<"Your Automobile can be driven "<<mileCanDriven<<" miles without refueling"<<endl;
                        }
                        else if (mileCanDriven<2){
                                  cout<<"Your Automobile can be driven "<<mileCanDriven<<" mile without refueling"<<endl;  
                        }
                        
                        thirdLabel:
                        cout<<"Enter 1 to continue and 0 to exit"<<endl;
                        cin>>choice;
                        if(cin.fail()||choice < 0){
                             cin.clear();
                             cin.ignore();
                             counter3++;
                                if(counter3==1||counter3==2){
                                         cout<<"Please enter 1 or 0 only!"<<endl;
                                         goto thirdLabel;
          }
                                else if(counter3==3){
                                         cout<<"You have used all your attempts"<<endl;
                                         break;
         }
    
      }
                        else if (choice==1){
                           goto firstLabel;
                        }
                        else if (choice==0){
                           break;
                        }
                        else{
                         counter4++;
                         if (counter4 == 1 || counter4 == 2)
                         {
                                 cout<<setfill('-')<<setw(15)<<"Please enter 1 or 0 only! "<<endl;
                                 goto thirdLabel; 
                         }
                         else if (counter4 == 3){
                                   break;
                                   cout<<"You entered invalid command"<<endl;
                         }
                         
                 }
         }
}