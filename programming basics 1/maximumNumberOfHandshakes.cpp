#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout<<"Enter The Number : ";
    cin>>number;

    cout<<"Enter maximum number of handshakes : "<<(number*(number-1))/2;
    return 0;
}
