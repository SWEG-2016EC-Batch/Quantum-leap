//This program takes into assumption that a character is equavalent to 1 byte of memory so 960 characters per second translates to 960 bytes per second.
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long int size, time, size_num;
    char size_type;
    int sec, min, hrs, days, weeks, months, years;
    cout<<"Enter the unit you desire:\nt for TeraBytes\ng for GigaBytes\nm for MegaBytes\nk for KiloBytes\nb for Bytes ";
    cin>>size_type;
    cout<<"What is the size ";
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
        cout<<"Please enter valid input with consideration of capslock"<<endl;
        return 0;
    }
    time = (size * size_num) / 960;
    years = time / 31536000; 
    time %= 31536000;

    months = time / 2628288;
    time %= 2628288;
    weeks = time / 604800;
    time %= 604800;
    days = time / 86400;
    time %= 86400;
    hrs = time / 3600;
    time %= 3600;
    min = time / 60;
    time %= 60;
    sec = time;
    cout<<"It will take "<<years<<" years, "<<months<<" months, "<<weeks<<" weeks, "<<days<<" days, "<<hrs<<" hours, "<<min<<" minutes, and "<<sec<<" seconds";

    return 0;
}