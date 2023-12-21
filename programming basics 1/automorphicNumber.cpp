#include <iostream>
using namespace std;

int main ()
{
  int num,sq,temp,flag=0,n=10;
  cout << "Please enter the number : ";
  cin >> num;
  temp=num;
  sq=num * num;
  while(temp>0){
      int rem = sq%n;
      if(rem==num){
          flag=1;
          break;
      }
      temp=temp/10;
      n=n*10;
  }
  if(flag==1){
      cout<<"The Number is Automorphic";
  }
  else{
      cout<<"The Number is not Automorphic";
  }
  
  return 0;
}
