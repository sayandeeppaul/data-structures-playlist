#include <iostream>
using namespace std;

bool isPrime(int num){
  for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
	    return false;
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The factors of "<<num<<" is : ";
    for(int i =2 ; i<=num;i++){
        if(num%i==0){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
    }

    return 0;
}
