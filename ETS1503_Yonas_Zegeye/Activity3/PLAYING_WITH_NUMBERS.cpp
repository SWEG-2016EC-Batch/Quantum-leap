#include <iostream>
#include <unistd.h>
using namespace std;
int main(){

            while (true){  
                firstLabel:
                int userChoice;
                  cout<<"************MENU************"<<endl;
                  cout<<"Enter the task you want to perform press :"<<endl;
                  cout<<"0. To Exit the program\n1. To find reverse of a number\n2. To know the number of digits your given number has\n3. To find the products of even digits\n4. To get the first and last digit of your number and their sum\n5. Swap the first and last digit of a number\n6. To check your number is palindrome number\n7. To get the frequency of each digit\n8. To check if your number is strong number\n9. To check if your number is perfect number."<<endl;
                 
                  cin>>userChoice;
                  if (cin.fail()||userChoice < 0 || userChoice > 9){
                        cin.clear();
                        cin.ignore();
                        cout<<"INVALID INPUT!PLEASE TRY AGAIN!"<<endl;
                        goto firstLabel;
                  }
                  switch (userChoice){
                        case 0:
                        cout<<"See you soon!"<<endl;
                            return 0;
                             break;
                      case 1:{              
                             int reverseTheNumber = 0,numForReverse,tempForReverse,remainderforReverse;
                             cout<<"enter the number you want to find reverse: enter non-number character to go back to menu"<<endl;
                             cin>>numForReverse;
                             if (cin.fail()||numForReverse<0){
                                   cin.clear();
                                   cin.ignore();
                                   goto firstLabel;
                             }
                                   tempForReverse = numForReverse;//to keep the originality of num.
                                    while(numForReverse>0){
                                           remainderforReverse = numForReverse%10;
                                           reverseTheNumber =reverseTheNumber*10+remainderforReverse;
                                           numForReverse = numForReverse/10;
                                    }
                                           cout<<"Entered Number : "<<tempForReverse<<" \nReverse of The number : "<<reverseTheNumber<<endl;
                                           sleep(3);       
                                           break;
                      }

                      case 2:{
                         long long int digitsCounter=0, remainderForDigits , numForDigits,tempForDigits;
                         cout<<"Enter the number you want , to know how many digit it has : Enter non digit character or negative number to go back to menu. "<<endl;
                         cin>>numForDigits;
                         if (cin.fail()||numForDigits < 0){
                               cin.clear();
                               cin.ignore();
                               goto firstLabel;
                          }
                              tempForDigits = numForDigits;//to keep originality of num.
                              while (numForDigits > 0){
                                    digitsCounter++;
                                    remainderForDigits = numForDigits % 10;
                                    numForDigits = numForDigits/10;
                               }
                                    cout<<"Your entered number : "<<tempForDigits<<" has "<<digitsCounter<<" digits"<<endl;
                                sleep(3);
                                break;
                    }
                    case 3:{
                      int productOfEvenDigits = 1,numForProductOfEvenDigits,tempForProductOfEvenDigits,remainderForProductOfEvenDigits,evenDigit,evenCounter;
                      cout<<"enter the number you want to find the product of even digits: enter non-number character or negative number to go back to menu"<<endl;
                      cin>>numForProductOfEvenDigits;
                      if (cin.fail()||numForProductOfEvenDigits<0){
                            cin.clear();
                            cin.ignore();
                            goto firstLabel;
                      }
                            tempForProductOfEvenDigits = numForProductOfEvenDigits;//to keep the originality of num.
                            while(numForProductOfEvenDigits>0){
                                remainderForProductOfEvenDigits = numForProductOfEvenDigits%10;
                                      if (remainderForProductOfEvenDigits % 2 == 0){
                                           evenCounter++;// To know how many even  numbers are present int the entered digits.
                                           evenDigit = remainderForProductOfEvenDigits;//later to specify the digit.
                                           productOfEvenDigits *=remainderForProductOfEvenDigits;     
                                      }
                                           numForProductOfEvenDigits = numForProductOfEvenDigits/10;
                            }
                                           if (evenCounter > 1){
                                                   cout<<"The product of even digits of your entered number "<<tempForProductOfEvenDigits<<" is : "<<productOfEvenDigits<<endl;
                                           }
                                           else if(evenCounter == 0){
                                                    cout<<"There is no even digit present in your entered number! "<<endl;   
                                           }
                                           else {
                                                   cout<<"NO PRODUCT! There is only one even digit present with the digit being "<<evenDigit<<endl;
                                           }
                                            sleep(3);
                                           break;
                    }

                    case 4:{
                      long long int numForFirstAndLast,tempNumForFirstAndLast,remainderForFirstAndLast,firstDigit,lastDigit,firstAndLastDigitSum=0;
                      cout<<"enter the number you want to find first and last digit: enter non-number character or a negative number to go back to menu"<<endl;
                      cin>>numForFirstAndLast;
                      if (cin.fail()||numForFirstAndLast<0){
                            cin.clear();
                            cin.ignore();
                            return 0;
                      }
                          tempNumForFirstAndLast = numForFirstAndLast;//To keep originality of num
                          lastDigit = numForFirstAndLast%10;
                          while(numForFirstAndLast>0){
                            
                          remainderForFirstAndLast = numForFirstAndLast%10;
                          numForFirstAndLast = numForFirstAndLast/10;
                      }
                          firstDigit = remainderForFirstAndLast;
                          if (tempNumForFirstAndLast >= 0 && tempNumForFirstAndLast < 10){
                            
                              cout<<"The first digit is : "<<lastDigit<<endl;
                              cout<<"The  last digit is : "<<lastDigit<<endl;
                              cout<<"Since there is only one digit number ther is no sum!"<<endl;
                          }
                          else{
                          cout<<"The first digit is : "<<firstDigit<<endl;
                          cout<<"The  last digit is : "<<lastDigit<<endl;
                          cout<<"There sum is : "<<firstDigit+lastDigit<<endl;
                          }
                          sleep(3);
                          break;
                           
                    }
                    case 5: {                           long long int swapInputNum,tempSwapNum,tempFirstDigit,tempLastDigit,remainder,firstDigit,lastDigit,middleDigits,digitsCounter=0,swappedNumber;
                        cout<<"enter the number you want to swap first and last digit: enter non-number character or a negative number to go back  to menu"<<endl;
                               cin>>swapInputNum;
                               if (cin.fail()||swapInputNum<0){
                                     cin.clear();
                                     cin.ignore();
                                     return 0;
                               }
                                   tempSwapNum = swapInputNum;//To keep originality of num
                                   lastDigit = swapInputNum%10;
                                   tempLastDigit = lastDigit;//Storing lastdigit for the swapping with first digit.

                                   while(swapInputNum>0){

                                   remainder = swapInputNum%10;
                                   swapInputNum = swapInputNum/10;
                                   digitsCounter++;
                               }
                                   firstDigit = remainder;
                                   tempFirstDigit = firstDigit; // to keep originality of the first number for later output.
                                   middleDigits = (tempSwapNum % (int)pow(10, digitsCounter - 1)) / 10;// Extract middle part
                                   swappedNumber = lastDigit * pow(10, digitsCounter - 1) + middleDigits * 10 + firstDigit;  // Reconstruct the number with swapped digits.
                                   //Swapping of the numbers
                                   if(tempSwapNum >= 0 && tempSwapNum < 10){
                                       cout<<"The number has only one digit! "<<endl;
                                   }
                                   else{
                                        cout<<"Entered Number : "<<tempSwapNum<<"After Swapping the first and the last digit the number will be : ";
                                        cout<<swappedNumber<<endl;
                                   }
                                        sleep(5);
                                        break;
                            }
                  
                     case 6:{
                         int reverseOfInputNum = 0,palindromeInputNum,tempPalindromeInputNUm,remainderForPalindrome;
                         cout<<"enter the number you want to find palindrome: enter non-number character to go back to menu"<<endl;
                         cin>>palindromeInputNum;
                         if (cin.fail()||palindromeInputNum<0){
                               cin.clear();
                               cin.ignore();
                               goto firstLabel;
                         }

                         tempPalindromeInputNUm = palindromeInputNum;//to keep the originality of num.
                         while(palindromeInputNum>0){
                             remainderForPalindrome = palindromeInputNum%10;
                             reverseOfInputNum =reverseOfInputNum*10+remainderForPalindrome;
                             palindromeInputNum = palindromeInputNum/10;
                         }

                             if (reverseOfInputNum == tempPalindromeInputNUm) {
                                  cout<<"The number is palindrome"<<endl;

                             }
                             else{
                                  cout<<"The number is not palindrome"<<endl;
                             }
                              sleep(3);
                        break;
                     }
                     case 7:{
                        long long int counter0=0,counter1=0,counter2=0,counter3=0,counter4=0,counter5=0,counter6=0,counter7=0,counter8=0,counter9=0,remainderOfTheNumber,inputNumForFrequency;
                        cout<<"Enter your number to know the frequency of each digit happening: Enter non-numeric character or negative numeber to go back to menu"<<endl;
                        cin>>inputNumForFrequency;
                        if (cin.fail()||inputNumForFrequency < 0){
                                cin.clear();
                                cin.ignore();
                                goto firstLabel;
                        }
            
                              while(inputNumForFrequency>0){
                                          remainderOfTheNumber = inputNumForFrequency % 10;
                                          switch (remainderOfTheNumber){
                                                  case 0:
                                                          counter0++;
                                                      break;
                                                  case 1:
                                                          counter1++;
                                                      break;
                                                  case 2:
                                                          counter2++;
                                                      break;

                                                  case 3:
                                                          counter3++;
                                                      break;
                                                  case 4:
                                                          counter4++;
                                                      break;
                                                  case 5:
                                                          counter5++;
                                                      break;
                                                  case 6:
                                                          counter6++;
                                                      break;
                                                  case 7:
                                                          counter7++;
                                                      break;

                                                  case 8:
                                                          counter8++;
                                                      break;
                                                  case 9:
                                                          counter9++;
                                                          break;
                                                  default:
                                                      break;
                                          }
                                                  inputNumForFrequency = inputNumForFrequency/10;
                              }
                                                  cout<<"number \t\tfrequency\n"<<"0\t \t"<<counter0<<"\n"<<"1\t \t"<<counter1<<"\n"<<"2\t \t"<<counter2<<"\n"<<"3\t \t"<<counter3<<"\n"<<"4\t \t"<<counter4<<"\n"<<"5\t \t"<<counter5<<"\n"<<"6\t \t"<<counter6<<"\n"<<"7\t \t"<<counter7<<"\n"<<"8\t \t"<<counter8<<"\n"<<"9\t \t"<<counter9<<endl;
                                          sleep(4);
                                          break;
                     }
                     case 8:{
                        int factorialSum=0,inputNum,tempNum,remainder;
                        cout<<"enter the number you want to find strong number: enter non-number character to go back to menu"<<endl;
                        cin>>inputNum;
                        if (cin.fail()||inputNum<0){
                              cin.clear();
                              cin.ignore();
                              return 0;
                        }
                              tempNum = inputNum;//to keep the originality of num.
                              while(inputNum>0){
                                     int factorialResult=1;
                                     remainder = inputNum%10;
                                            for (int counter = 1; counter <= remainder; counter++){
                                                   factorialResult *=counter;  
                                            }
                                                   factorialSum +=factorialResult;
                                                   inputNum = inputNum/10;
                              }
                              if (tempNum == factorialSum && tempNum != 0){ //also check for temp !=0 since zero is not strong number to minimize logical error. 
                                      cout<<"The entered number is strong number"<<endl;
                               }
                              else{
                                    cout<<"The entered number is not strong number"<<endl;
                              }
                                 sleep(3);
                                 break;
                     }
                     case 9:{
                            int sumOfAllDivisor=0,num,temp,remainder;
                            cout<<"enter the number you want to find perfect number: enter non-number character to go  back to menu"<<endl;
                            cin>>num;
                            if (cin.fail()||num<0){
                                  cin.clear();
                                  cin.ignore();
                                  goto firstLabel;
                            }

                                  temp = num;//to keep the originality of num.
                                  while(num>0){
                                         int divisorSum=0;
                                         remainder = num%10;
                                         for (int counter = 1; counter < remainder; counter++){
                                                 if (remainder % counter == 0){
                                                     divisorSum += counter;
                                                 }

                                         }
                                             sumOfAllDivisor +=divisorSum;
                                             num = num/10;
                                     }
                                       if (temp == sumOfAllDivisor && temp != 0){ //also check for temp !=0 since zero is not perfect to minimize logical error. 
                                             cout<<"The entered number is perfect number"<<endl;
                                       }
                                       else{
                                             cout<<"The entered number is not perfect number"<<endl;
                                       }
                                       sleep(3);
                                    break;
                     }
                     default:
                     cout<<"The operation you are trying to carryout doesnot exist!"<<endl;
                     
                   }
            }
        }
            
