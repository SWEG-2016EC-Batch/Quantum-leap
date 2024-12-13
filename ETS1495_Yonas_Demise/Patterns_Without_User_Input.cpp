#include<iostream>
using namespace std;
int main() {
    char alpha='A',alph,counter=4;;
    int menu;
    label:
   cout<<"*****MENU*****"<<endl;
   cout<<"Press 1 to view square pattern with numbers"<<endl;
   cout<<"Press 2 to view square pattern with upper case alphabets"<<endl;
   cout<<"Press 3 to view right-aligned right-angled triangle with numbers"<<endl;
   cout<<"Press 4 to view left-aligned right-angled triangle with numbers"<<endl;
   cout<<"Press 5 to view right-aligned right-angled triangle with alphabets"<<endl;
   cout<<"Press 6 to view square pattern with lower case alphabets"<<endl;
   cout<<"Press 7 to view hollow square"<<endl;
   cout<<"Press 8 to view inverted half pyramid"<<endl;
   cout<<"Press 9 to view hollow inverted half-pyramid"<<endl;
   cout<<"Press 10 to view full pyramid "<<endl;
   cout<<"Press 11 to view inverted full pyramid"<<endl;
   cout<<"Press 12 to view hollow full pyramid"<<endl;
   cout<<"Press 0 to terminate the program"<<endl;
   cin>>menu;
   switch(menu) {
    case 1:
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<j+1;
        }
        cout<<endl;
    }
    break;
    case 2:
    for(int i=0;i<4;i++) {
        for(int j=0;j<=5;j++) {
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }
    break;
    case 3:
    for(int i=0;i<=5;i++) {
        for(int j=0;j<i;j++) {
            cout<<j+1;
        }
        cout<<endl;
    }
    break;
    case 4:
    for(int i=1;i<=5;i++) {
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
    for(int i=0;i<=5;i++) {
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
    for(int i=0;i<5;i++) {
        alph='a';
        for(int j=0;j<5;j++) {
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
   for(int i=1;i<=7;i++) {
        for(int j=1;j<=8;j++) {
            if(i==1 || i==7 || j==1 || j==8 ) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    break;
    case 8:
    for(int i=0;i<5;i++) {
        for(int j=5;j>i;j--) {
           cout<<"*";
        }
        cout<<endl;
    }
    break;
    case 9:
    for(int i=5;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            if(i==5 || j==1 || j==i ) {
           cout<<"*";
        } else {
            cout<<" ";
        }
    }
    cout<<endl;
   }
   break;
   case 10:
   for(int i=1; i<=6;i++) { 
        for(int j=1;j<=6-i;j++) {
                cout<<" ";
         }
            for(int k=1;k<=i*2-1;k++) {
                    cout<<"*";
            }
                cout<<endl;
    }
    break;
    case 11:
    for(int i=6; i>=1;i--) { 
        for(int j=1;j<=6-i;j++) {
                cout<<" ";
         }
            for(int k=i*2-1;k>=1;k--) {
                    cout<<"*";
            }
                cout<<endl;
    }
    break;
    case 12:
   for(int i=1; i<=6;i++) { 
        for(int j=1;j<=6-i;j++) {
                cout<<" ";
         }
            for(int k=1;k<=i*2-1;k++) {
                if(i==6  || k==1 || k==i*2-1) {
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
