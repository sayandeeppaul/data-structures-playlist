#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int num){
    int sum =0,i=0;
    while(num>0){
        int rem = num% 10;
        sum =sum + rem * pow(2,i);
        i++;
        num=num/10;
    }
    return sum;
}

int main()
{
    int binary;
    cout<<"Enter The Binary Number : ";
    cin>>binary;
    
    int res = binaryToDecimal(binary);
    cout<<"The Decimal value of "<<binary<<" is : "<<res;

    return 0;
}
