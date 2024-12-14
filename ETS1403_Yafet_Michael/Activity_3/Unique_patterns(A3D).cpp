#include <iostream>
using namespace std;

int main() {
    int userOption, customChoice;

    cout << "Hello! Welcome to the Number Pattern Generator!\n";
    cout << "Below are the options available for creating different patterns:\n";
    cout << "1: 5x5 square with numbers\n";
    cout << "2: 4x6 alphabet box\n";
    cout << "3: Left-bottom triangle with numbers\n";
    cout << "4: Right-bottom triangle with numbers\n";
    cout << "5: Left-bottom triangle with letters\n";
    cout << "6: 5x5 square with lowercase letters\n";
    cout << "7: 7x7 hollow box\n";
    cout << "8: Inverted left-bottom triangle\n";
    cout << "9: Hollow inverted left-bottom triangle\n";
    cout << "10: Full pyramid\n";
    cout << "11: Inverted full pyramid\n";
    cout << "12: Hollow full pyramid\n\n";

    while (true) {
        cout << "Please enter the number of your pattern choice (1-12): ";
        cin >> userOption;

        if (userOption<1 || userOption>12) {
            cout << "Invalid choice. Please select a valid option.\n";
            continue;
        }

        cout << "Do you want to customize the pattern? (0 for Yes, any other number for No): ";
        cin >> customChoice;

        if (customChoice != 0) {
            switch (userOption) {
                case 1:
                    for(int i=1; i<=5; i++){
                        for(int j=1; j<=5; j++){
                           cout <<j<<" ";
                        }
                        cout<<endl;
                     }
                    break;
                case 2:
                    char alph = 'A';
                    for(int i=1; i<=4; i++){
                       for( int j=1; j<=6; j++){
                           cout<<alph<<" ";
                           alph++;
                        }
                        cout<<endl;
                    } 
                    break;
                case 3:
                     for(int i=1; i<=5; i++){
                         for( int j=1; j<=i; j++){
                             cout<<j<<" ";
                          }
                         cout<<endl;
                      } 
                    break;
                case 4:
                    for(int i=1; i<=5; i++)
                 {
                    for(int j=1; j<=5-i; j++)         
                        cout<<" ";
                    for(int k=i; k>=1; k--)
                      {
                         cout<<k;
                       }
                         cout<<endl;         
                  }
                    break;
                case 5:
                    for(int i=1; i<=5; i++)
                {
                  char alph = 'A';
                  for( int j=1; j<=i; j++){
                      cout<<alph<<" ";
                      alph++;
                     }       
                      cout<<endl;
                 } 
                    break;
                case 6:
                    for(int i=1; i<=5; i++)
                {
                  char alph = 'a';
              for( int j=1; j<=5; j++){
                   cout<<alph<<" ";
                   alph++;
                 }       
                    cout<<endl;
                 }
             }
                    break;
                case 7:
                    for(int i=1; i<=8; i++)
                 {
                   for(int j=1; j<=8; j++)
                     {
                       if(i==1||i==8)
                       cout<<'*';          
                       else if(j==1||j==8)
                       cout<<'*';  
                       else if(j>1)
                       cout<< " ";        
                      }
                       cout<<endl;
                  } 
                    break;
                case 8:
                    for (int i=6; i>=1; i--)
                 {
                   for(int j=1; j<=i; j++)
                     {
                       cout<<'*';
                      }
                       cout<<endl;
                  }
                    break;
                case 9:
                    for (int i=6; i>=1; i--)
                 {
                   for(int j=1; j<=i; j++)
                     {
                       if(i==1||i==6)
                       cout<<'*';
                       else if(j==1||j==i)
                       cout<<'*';
                       else if(j>1)
                       cout<<" ";
                      }
                        cout<<endl;
                  }
                    break;
                case 10:
                    for(int i=1; i<=6; i++)
                {
                 for(int j=6-i; j>=1; j--)
                    cout<<" ";
                 for(int k=1; k<=i; k++)
                   {
                     cout<<'*'<<" ";
                    }
                     cout<<endl;
                 }
                    break;
                case 11:
                    for(int i=6; i>=1; i--)
                {
                 for(int j=6-i; j>=1; j--)
                 cout<<" ";
                 for(int k=1; k<=i; k++)
                   {
                    cout<<'*'<<" ";
                    }
                    cout<<endl;
                 }
                    break;
                case 12:
                    for(int i=1; i<=6; i++)
                {
                  for(int j=6-i; j>0; j--)
                   cout<<" ";
                  for(int k=1; k<=i; k++)
                    {
                      if(i==1||i==6){
                      cout<<"* ";
                      }           
                      else if(k==1||k==i){
                       cout<<"* ";
                      }
                      else if(k>1){
                       cout<<"  ";
                      }
                     }
                    cout<<endl;    
                 }
                    break;
            }
        } else {
            int height, width;
            cout << "Custom Pattern Selected!\nEnter the height of your pattern: ";
            cin >> height;
            if (userOption == 1 || userOption == 2 || userOption == 6 || userOption == 7) {
                cout << "Enter the width of your pattern: ";
                cin >> width;
            }

            switch (userOption) {
                case 1:
                    for (int row = 0; row < height; ++row) {
                        for (int col = 0; col < width; ++col) {
                            cout << col + 1 << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 2:
                    for (int row = 0; row < height; ++row) {
                        for (int col = 0; col < width; ++col) {
                            cout << char('A' + col + row * width) << " ";
                        }
                        cout << endl;
                    }
                    break;
            }
        }

        break;
    }

    return 0;
}
