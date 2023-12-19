#include <iostream>

using namespace std;

int main()
{
    int num,reverse=0,temp;
    cout<<"Please enter the number : ";
    cin>>num;
    temp = num;
    while(num > 0){
        int rem;
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if(temp==reverse){
        cout<<"The number is Palindrome";
    }
    else{
        cout<<"The number is not Palindrome";
    }
    

    return 0;
}
