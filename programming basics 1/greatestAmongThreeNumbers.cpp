#include <iostream>
using namespace std;

int main (){
  int num1,num2,num3;
  cout<<"Enter first number : ";
  cin>>num1;
  cout<<"Enter second number : ";
  cin>>num2;
  cout<<"Enter third number : ";
  cin>>num3;
  
  if(num1>=num2 && num1 >= num3){
      cout<<"The greatest is "<<num1<<endl;
  }
  else if(num2>=num1 && num2 >= num3){
      cout<<"The greatest is "<<num2<<endl;
  }
  else{
      cout<<"The greatest is "<<num3<<endl;
  }

  return 0;
}
