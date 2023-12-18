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

int main ()
{
  int sLimit,eLimit;
  cout<<"Enter starting index : ";
  cin>>sLimit;
  cout<<"Enter ending index : ";
  cin>>eLimit;
  
  for (int i = sLimit; i < eLimit; i++)
    {
      if(isPrime(i)){
         cout<<i<<" "; 
      }
    }
  return 0;
}
