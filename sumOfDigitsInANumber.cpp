#include <iostream>

using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Please enter the number : ";
    cin>>num;
    
    while(num>0){
        int rem;
        rem = num% 10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<"The sum of digits is : "<<sum;

    return 0;
}