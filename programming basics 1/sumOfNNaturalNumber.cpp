#include <iostream>
using namespace std;

int main (){
  int limit;
  cout<<"Enter a number : ";
  cin>>limit;
  int temp=limit;
  int sum = 0;
  while(temp>0){
      sum = sum + temp;
      temp--;
  }
  cout<<"The sum of first "<<limit<<" number is : "<<sum<<endl;
  return 0;
}
