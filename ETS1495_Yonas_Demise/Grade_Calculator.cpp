#include<iostream>
using namespace std;
int main() {
    float test,quiz,project,assignment,final_exam,total_mark;
    char answer;
    string grade;
    label1:
    cout<<"Enter the students score on the test (out of 15):"<<endl;
    cin>>test;
    if(cin.fail() || test<0 || test>15) {
        cout<<"Incorret Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label1;
    } 
    label2:
    cout<<"Enter the students score on quiz (out of 5):"<<endl;
    cin>>quiz;
     if(cin.fail() || quiz<0 || quiz>5) {
        cout<<"Incorret Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label2;
    }
    label3:
    cout<<"Enter the students score on the project (out of 20):"<<endl;
    cin>>project;
     if(cin.fail() || project<0 || project>20) {
        cout<<"Incorret Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label3;
   }
   label4:
   cout<<"Enter the students score on the assignment (out of 10):"<<endl;
    cin>>assignment;
     if(cin.fail() || assignment<0 || assignment>10) {
        cout<<"Incorret Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label4;
    } 
    label5:
    cout<<"Enter the students score on the final exam (out of 50):"<<endl;
    cin>>final_exam;
     if(cin.fail() || final_exam<0 || final_exam>50) {
        cout<<"Incorret Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label5;
    }
    total_mark=test + quiz + project + assignment + final_exam;
    if(total_mark>=90) {
        grade= "A+";
    } else if(total_mark>=80 && total_mark<90) {
        grade= "A";
    } else if(total_mark>=75 && total_mark<80) {
        grade= "B+";
    } else if(total_mark>=60 && total_mark<75) {
        grade= "B";
    } else if(total_mark>=55 && total_mark<60) {
        grade= "C+";
    } else if(total_mark>=45 && total_mark<55) {
        grade= "C";
    } else if(total_mark>=30 && total_mark<45) {
        grade= "D";
    } else if(total_mark<30 && total_mark>=0) {
        grade= "F";
    } else {
        cout<<"ERROR!"<<endl;
    }
    cout<<"The student's grade is: "<<grade<<endl;
    cout<<endl;
    label6:
    cout<<"Do you want to calculate again?\n Say 'Y' for yes and 'N' for no."<<endl;
    cin>>answer;
    if(answer=='Y') {
        goto label1;
    } else if(answer=='N') {
        cout<<"Have a Nice Day!"<<endl;
    } else {
        cout<<"Incorret Input!, Please enter again."<<endl;
        cin.clear();
        cin.ignore();
        goto label6;
    }

    return 0;

}
