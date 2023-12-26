#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int temp=n;
    int numArray[32];
    int i = 0;
    while(n>0){
        int rem = n% 10;
        if(rem==0){
            rem =1;
            numArray[i]=rem;
        }
        else{
            numArray[i]=rem;
        }
        i++;
        n=n/10;
    }
    cout<<"The replaced number of "<<temp<<" is ";
    for(int j = i-1 ; j>=0;j--){
        cout<<numArray[j];
    }
    
    
    return 0;
}