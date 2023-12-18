#include <iostream>

using namespace std;

int main (){
    
  // number inserted
  int num;
  cout<<"Enter a number : ";
  cin>>num;
  
  // checking the conditions if the number is odd or even
  
  if(num % 2 == 0){
      cout<<num<<" is even"<<endl;
  }
  else{
      cout<<num<<" is odd"<<endl;
  }
  
  return 0;
}
