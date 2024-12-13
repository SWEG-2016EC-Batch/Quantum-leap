#include <iostream>
#include <string>
using namespace std;
int main () {
  int menu;
    cout<< " Enter '1' to see numbers in rectangular form from 1 to 5(5x)! \n";
    cout<< " Enter '2' to see alphabets in rectangular form from A to X! \n";
    cout<< " Enter '3' to see numbers in rightangle form left to right! \n";
    cout<< " Enter '4' to see numbers in rightangle form right to left! \n";
    cout<< " Enter '5' to see alphabets in rightangle form from A to E! \n";
    cout<< " Enter '6' to see alphabets in repetitive rectangular form from a to e! \n";
    cout<< " Enter '7' to see stars patters in rectangular form! \n";
    cout<< " Enter '8' to see stars patters in inverted half pyramid form! \n";
    cout<< " Enter '9' to see stars patters in hallow inverted half pyramid form! \n";
    cout<< " Enter '10' to see stars patters in full pyramid form! \n";
    cout<< " Enter '11' to see stars patters in inverted full pyramid form! \n";
    cout<< " Enter '12' to see stars patters in hollow full pyramid form! \n";
    cin >>menu;
       if(menu==1)
         {
          cout<<" You need to see numbers in rectangular form from 1 to 5(5x)! \n";
          for(int i=1; i<=5; i++)
            {
              for(int j=1; j<=5; j++)
                 {
                   cout <<j<<" ";
                  }
                   cout<<endl;
             }
         }
        else if(menu==2)
            {
              cout<< " You need to see alphabets in rectangular form from A to X! \n";
              char alph = 'A';
               for(int i=1; i<=4; i++)
                 {
                   for( int j=1; j<=6; j++)
                     {
                       cout<<alph<<" ";
                       alph++;
                      }
                        cout<<endl;
                  } 
            }
        else if(menu==3)
             {
              cout<< " You need to see numbers in rightangle form left to right! \n";
               for(int i=1; i<=5; i++)
                 {
                   for( int j=1; j<=i; j++)
                     {
                        cout<<j<<" ";
                      }
                        cout<<endl;
                  } 
             } 
        else if(menu==4)
             {
               cout<< " You need to see numbers in rightangle form right to left! \n";
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
             }
        else if(menu==5)
             {
              cout << " You need to see alphabets in rightangle form from A to E! \n";
              for(int i=1; i<=5; i++)
                {
                  char alph = 'A';
                  for( int j=1; j<=i; j++){
                      cout<<alph<<" ";
                      alph++;
                     }       
                      cout<<endl;
                 } 
             }
        else if(menu==6)
             {
              cout<< " You need to see alphabets in repetitive rectangular form from a to e! \n";
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
        else if(menu==7)
             {
              cout<< " You need to see stars patters in rectangular form! \n";
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
             }
        else if(menu==8)
             {
              cout<< " You need to see stars patters in inverted half pyramid form! \n";
              for (int i=6; i>=1; i--)
                 {
                   for(int j=1; j<=i; j++)
                     {
                       cout<<'*';
                      }
                       cout<<endl;
                  }
             }
        else if(menu==9)
             {
              cout<< " You need to see stars patters in hallow inverted half pyramid form! \n";
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
             }
        else if(menu==10)
             {
              cout<< " You need to see stars patters in full pyramid form! \n";
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
             }
        else if(menu==11)
             {
              cout<< " You need to see stars patters in inverted full pyramid form! \n";
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
             }
        else if(menu==12)
             {
              cout<< " You need to see stars patters in hollow full pyramid form! \n";
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
             }
    return 0;
}
