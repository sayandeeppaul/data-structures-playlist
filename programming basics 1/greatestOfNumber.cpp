#include <iostream>
using namespace std;

int main (){
  int num1,num2;
  cout<<"Enter first number : ";
  cin>>num1;
  cout<<"Enter second number : ";
  cin>>num2;
  
  if(num1>num2){
      cout<<"The greatest is "<<num1<<endl;
  }
  else if(num2>num1){
      cout<<"The greatest is "<<num2<<endl;
  }
  else{
      cout<<"Both are same"<<endl;
  }
  return 0;
}
