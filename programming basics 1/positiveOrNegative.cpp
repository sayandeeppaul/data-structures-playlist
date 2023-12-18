#include <iostream>

using namespace std;

int main (){
    
  // number inserted
  int num;
  cout<<"Enter a number : "<<endl;
  cin>>num;
  
  // checking the conditions if the number is +ve or -ve
  if(num>0){
      cout<<num<<" is positive"<<endl;
  }
  else if(num<0){
      cout<<num<<" is negative"<<endl;
  }
  else{
      cout<<num<<" is zero"<<endl;
  }
  return 0;
}