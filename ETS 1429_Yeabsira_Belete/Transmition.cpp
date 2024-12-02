#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long int size, time, size_num,temp;
    char size_type;
    int seconds, minutes, hours, days, weeks, months, years;
    cout<<"size type" <<endl;
    cin>>size_type;
    cout<<"What is the size " <<endl;
    cin>>size;
    switch (size_type) {
        case 't':
        size_num = 1099511627776;
        break;
        case 'g':
        size_num = 1073741824;
        break;
        case 'm':
        size_num = 1048576;
        break;
        case 'k':
        size_num = 1024;
        break;
        case 'b':
        size_num = 1;
        break;
        default:
        cout<<" Invalid input "<<endl; 
        return 0;       
    }
    time = (size * size_num) / 960;
    temp = time;
    years = temp / 31536000; 
    time %= 31536000;
    months = time / 2628288;
    time %= 2628288;
    weeks = time / 604800;
    time %= 604800;
    days = time / 86400;
    time %= 86400;
    hours = time / 3600;
    time %= 3600;
    minutes = time/ 60;
    time %= 60;
    seconds = time;
    
    cout<<"The time requared "<<years<<" Years, "<<months<<" Months, "<<weeks<<" Weeks, "<<days<<" Days, "<<hours<<" Hours, "<<minutes<<" Minutes, and "<<seconds<<" Seconds";

    return 0;
}
