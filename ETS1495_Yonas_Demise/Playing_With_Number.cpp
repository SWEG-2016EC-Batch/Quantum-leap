#include<iostream>
using namespace std;
int main() {
    int num,reminder,temp,counter=0,product=1,sum=0,divisor=1,digit,difference,count=1;
    int frequency[10]={0}; // this is for case 7 to store the frequencies
   int menu;
    label:
   cout<<"*****MENU*****"<<endl;
   cout<<"Press 1 to find the reverse of a number"<<endl;
   cout<<"Press 2 to count the number of digits in a given number"<<endl;
   cout<<"Press 3 to find the product of even digits of a given number"<<endl;
   cout<<"Press 4 to find the sum of first and last digits of a number"<<endl;
   cout<<"Press 5 to swap the first and last digits of a number"<<endl;
   cout<<"Press 6 to check wether a number is palindrome or not"<<endl;
   cout<<"Press 7 to find the frequency of digits of a number"<<endl;
   cout<<"Press 8 to check if a number is strong or not"<<endl;
   cout<<"Press 9 to check wether a number is perfect or not"<<endl;
   cout<<"Press 0 to terminate the program"<<endl;
   cin>>menu;
   switch(menu) {
    case 1:
       cout<<"Enter a number:"<<endl;
       cin>>num;
       while(num>0) {
         reminder=num%10;
         cout<<reminder;
         num/=10;
       }
    break;
    case 2:
    cout<<"Enter a number:"<<endl;
    cin>>num;
    temp=num;
    while(num>0) {
        num/=10;
        counter++;
    }
    cout<<"The number "<<temp<<" has "<<counter<<" digits."<<endl;
    break;
    case 3:
    cout<<"Enter a number:"<<endl;
    cin>>num;
    temp=num;
    while(num>0) {
        reminder=num%10;
        if(reminder%2==0) {
            product*=reminder;
        }
       num/=10; 
    }
    cout<<"The product of even digits of the number "<<temp<<" is "<<product;
    break;
    case 4:
    cout<<"Enter a number:"<<endl;
    cin>>num;
    temp=num;
    while(num>0) {
        reminder=num%10;
        counter++;
        if(num/10==0) {
            cout<<"The first digit of the number is: "<<reminder<<endl;
        }
        if(counter==1) {
            cout<<"The last digit of the number is: "<<reminder<<endl;
        }
        if(counter==1 || (num/10)==0) {
            sum+=reminder;
        }
        num/=10;
    }
    cout<<"Therefore, The sum of the first and last digits of the number "<<temp<<" is "<<sum;
    break;
    case 5:
    int first_digit,last_digit,swapped_num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
   last_digit=num%10;
   temp=num;
   while(temp>=10) {
    temp/=10;
    divisor*=10;
   }
   first_digit=temp;
   swapped_num=last_digit*divisor + (num%divisor)/10 * 10 + first_digit;
   cout<<"After swapping the first and last digits the new number is: "<<swapped_num<<endl;
   break;
   case 6:
    cout<<"Enter a number:"<<endl;
    cin>>num;
    temp=num;
    while(num!=0) {
        digit=num%10;   // to extract the digits
        counter= ((counter*10)+ digit);    // to store the reverse of the number
        num/=10;
    }
    if(counter==temp) {
        cout<<"The number "<<temp<<" is Palindrome."<<endl;
    } else {
        cout<<"The number "<<temp<<" is Not Palindrome."<<endl;
    }
    break;
    case 7:
    long long int num2;
    cout<<"Enter a number:"<<endl;
    cin>>num2;
    while(num2>0) {
        digit=num2%10;
        frequency[digit]++;
        num2/=10;
    }
    cout<<"Digit\tFrequency"<<endl;
    for(int i=0;i<10;i++) {
        if(frequency[i]>0) {
            cout<<i<<"\t"<<frequency[i]<<endl;
        }
    }
    break;
    case 8:
    int factorial;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    temp=num;
    while(num>0) {
        factorial=1;
        reminder=num%10;
        for(int i=1;i<=reminder;i++) {
            factorial*=i;
        }
        sum+=factorial;
        num/=10;
    }
    if(sum==temp) {
        cout<<"The Number "<<temp<<" is Strong Number."<<endl;
    } else {
        cout<<"The Number "<<temp<<" is Not Strong Number."<<endl;
    }
    break;
    case 9:
    cout<<"Enter a number:"<<endl;
    cin>>num;
    while(count<=num) {
       divisor=num%count;
       if(count==0) {
        sum+=divisor;
       }
        count++;
    }
    difference=sum-num;
    if(difference==num) {
        cout<<"The number "<<num<<" is a Perfect number."<<endl;
    } else {
        cout<<"The number "<<num<<" is Not a Perfect number."<<endl;
    }
    break;
    case 0:
    cout<<"The Program is Terminated. Have a Nice Day!"<<endl;
    return 0;
    default :
   cout<<"Incorrect Input!, Please Enter Again."<<endl;
   goto label;
   }
   return 0;
}
