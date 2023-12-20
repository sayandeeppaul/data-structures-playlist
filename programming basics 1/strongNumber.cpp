#include <iostream>
using namespace std;

int fact(int num){
    int fact=1;
    
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    
    int temp=num;
    while(temp>0){
        int rem = temp % 10;
        sum= sum + fact(rem);
        temp=temp/10;
    }
    
    if(sum==num){
        cout<<"The number is strong";
    }
    else{
        cout<<"The number is not strong";
    }

    return 0;
}
