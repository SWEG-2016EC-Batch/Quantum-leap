#include<iostream>
using namespace std;
int main() {
    int row,column;
    char alpha='A',alph;
    int menu;
    label:
   cout<<"*****MENU*****"<<endl;
   cout<<"Press 1 to create square pattern with numbers"<<endl;
   cout<<"Press 2 to create square pattern with upper case alphabets"<<endl;
   cout<<"Press 3 to create right-aligned right-angled triangle with numbers"<<endl;
   cout<<"Press 4 to create left-aligned right-angled triangle with numbers"<<endl;
   cout<<"Press 5 to create right-aligned right-angled triangle with alphabets"<<endl;
   cout<<"Press 6 to create square pattern with lower case alphabets"<<endl;
   cout<<"Press 7 to create hollow square"<<endl;
   cout<<"Press 8 to create inverted half pyramid"<<endl;
   cout<<"Press 9 to create hollow inverted half-pyramid"<<endl;
   cout<<"Press 10 to create full pyramid "<<endl;
   cout<<"Press 11 to create inverted full pyramid"<<endl;
   cout<<"Press 12 to create hollow full pyramid"<<endl;
   cout<<"Press 0 to terminate the program"<<endl;
   cin>>menu;
   switch(menu) {
    case 1:
    cout<<"Enter the number of row:"<<endl;
    cin>>row;
    cout<<"Enter the number of column:"<<endl;
    cin>>column;
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            cout<<j+1;
        }
        cout<<endl;
    }
    break;
    case 2:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of column:"<<endl;
    cin>>column;
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            cout<<alpha;
            alpha++;
            if(alpha >'Z') {
                return 0;
            }
        }
        cout<<endl;
    }
    break;
    case 3:
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    for(int i=0;i<=num;i++) {
        for(int j=0;j<i;j++) {
            cout<<j+1;
        }
        cout<<endl;
    }
    break;
    case 4:
    int counter;
    cout<<"Enter a number of rows:"<<endl;
    cin>>row;
    counter=row-1;
    for(int i=1;i<=row;i++) {
        for(int k=counter;k>0;k--) {
            cout<<" ";
        }
        for(int j=i;j>=1;j--) {
            cout<<j;
        }
        
    counter--;
    cout<<endl;
    }
    break;
    case 5: 
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=0;i<=row;i++) {
        alph='A';
        for(int j=0;j<i;j++) {
            cout<<alph;
            alph++;
            if(alph >'Z') {
            return 0;
            }
        }
        
        cout<<endl;
    }
    break;
    case 6:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of columns:"<<endl;
    cin>>column;
    for(int i=0;i<row;i++) {
        alph='a';
        for(int j=0;j<column;j++) {
            cout<<alph;
            alph++;
            if(alph >'z') {
                return 0;
            }
        }
        cout<<endl;
    }
    break;
    case 7:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of columns:"<<endl;
    cin>>column;
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=column;j++) {
            if(i==1 || i==row || j==1 || j==column ) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    break;
    case 8:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++) {
        for(int j=row;j>i;j--) {
           cout<<"*";
        }
        cout<<endl;
    }
    break;
    case 9:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=row;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            if(i==row || j==1 || j==i ) {
           cout<<"*";
        } else {
            cout<<" ";
        }
    }
    cout<<endl;
   }
   break;
   case 10:
   cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1; i<=row;i++) { 
        for(int j=1;j<=row-i;j++) {
                cout<<" ";
         }
            for(int k=1;k<=i*2-1;k++) {
                    cout<<"*";
            }
                cout<<endl;
    }
    break;
    case 11:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=row; i>=1;i--) { 
        for(int j=1;j<=row-i;j++) {
                cout<<" ";
         }
            for(int k=i*2-1;k>=1;k--) {
                    cout<<"*";
            }
                cout<<endl;
    }
    break;
    case 12:
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for(int i=1; i<=row;i++) { 
        for(int j=1;j<=row-i;j++) {
                cout<<" ";
         }
            for(int k=1;k<=i*2-1;k++) {
                if(i==row  || k==1 || k==i*2-1) {
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }
                cout<<endl;
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
