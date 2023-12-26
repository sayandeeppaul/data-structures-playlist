#include <iostream>
using namespace std;

int main()
{
    int daysArray[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string monthArray[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int year,month;
    cout<<"Enter the year : ";
    cin>>year;
    cout<<"Enter the month : ";
    cin>>month;
    
    if(((year%400 ==0)||(year%4==0)&&(year%100!=0)) && (month==2) ){
        cout<<"The days in month "<<monthArray[month-1]<<" in the year of "<<year<<" is "<<daysArray[month-1]+1;
    }
    else{
        cout<<"The days in month "<<monthArray[month-1]<<" in the year of "<<year<<" is "<<daysArray[month-1];
    }
    return 0;
}