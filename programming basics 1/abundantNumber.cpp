#include <iostream>

using namespace std;

int main()
{
    int num,sum=0,temp;
    cout<<"Please enter the number : ";
    cin>>num;
    temp = num;
    
    for(int i=1;i<temp;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(num<sum){
        cout<<"The number is Abundant";
    }
    else{
        cout<<"The number is not Abundant";
    }

    return 0;
}
