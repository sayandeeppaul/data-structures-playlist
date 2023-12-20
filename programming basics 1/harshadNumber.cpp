#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    
    int temp=num;
    while(temp>0){
        int rem = temp % 10;
        sum= sum + rem;
        temp=temp/10;
    }
    
    if(num%sum==0){
        cout<<"The number is Harshad number";
    }
    else{
        cout<<"The number is not Harshad number";
    }

    return 0;
}
