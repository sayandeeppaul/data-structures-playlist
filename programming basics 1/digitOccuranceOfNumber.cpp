#include <iostream>
using namespace std;
int main() {

    int n,d;
    cout<<"Enter the number : ";
    cin>>n; 
    cout<<"Enter the digit : ";
    cin>>d; 
    int temp=n;
    int count=0; 

    while(temp) {
        int rem = temp%10; 
        if(rem == d){
            count++;
        }
        temp=temp/10; 
    }
    cout<<"The occurance of "<<d<<" in the "<<n<<"is : "<<count;

    return 0;

}