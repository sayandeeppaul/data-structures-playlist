#include <iostream>
using namespace std;

int main (){
  int sLimit,eLimit;
  cout<<"Enter starting index : ";
  cin>>sLimit;
  cout<<"Enter ending index : ";
  cin>>eLimit;
  int temp1=sLimit;
  int temp2=eLimit;
  int sum = 0;
  for(int i=temp1 ; i<=temp2 ; i++){
      sum= sum+ i;
  }
  cout<<"The sum of range "<<sLimit <<" to "<<eLimit<<" is : "<<sum<<endl;
  return 0;
}
