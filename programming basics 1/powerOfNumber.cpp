#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the Exponent: ";
    cin>>expo;
    
    int res;
    res = base;
    while(expo > 1){
        res=res * base;
        expo--;
    }
    cout<<"The Power number of "<<base<<" is : "<<res;
    return 0;
}
