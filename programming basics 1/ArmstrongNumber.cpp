#include <iostream>

using namespace std;

int main()
{
    int num,sum=0,temp;
    cout<<"Please enter the number : ";
    cin>>num;
    temp = num;
    
    while(num > 0){
        int rem;
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if(temp==sum){
        cout<<"The number is Amstrong";
    }
    else{
        cout<<"The number is not Amstrong";
    }

    return 0;
}
