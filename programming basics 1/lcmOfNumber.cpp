#include <iostream>
using namespace std;

int main()
{
    int num1,num2,hcf=1,lcm;
    cout<<"Enter The First Number : ";
    cin>>num1;
    cout<<"Enter The Second Number : ";
    cin>>num2;
    
    for(int i = 1;i<=num1 || i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    lcm = (num1 * num2)/hcf;
    cout<<"The LCM of "<<num1 <<" and "<<num2<<" is : "<<lcm;

    return 0;
}
