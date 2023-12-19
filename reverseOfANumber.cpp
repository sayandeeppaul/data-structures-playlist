#include <iostream>

using namespace std;

int main()
{
    int num,reverse=0;
    cout<<"Please enter the number : ";
    cin>>num;
    
    while(num > 0){
        int rem;
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    cout<<"The sum of digits is : "<<reverse;

    return 0;
}
