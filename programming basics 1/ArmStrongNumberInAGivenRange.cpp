#include <iostream>

using namespace std;

bool isArmstrong(int num){
    int temp,sum=0;
    temp=num;
      while(num > 0){
            int rem;
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if(temp==sum){
            return true;
        }
        else{
            return false;
        }
}

int main()
{
    int sLimit,eLimit;
      cout<<"Enter starting index : ";
      cin>>sLimit;
      cout<<"Enter ending index : ";
      cin>>eLimit;
      
      for (int i = sLimit; i < eLimit; i++)
        {
          if(isArmstrong(i)){
             cout<<i<<" "; 
          }
        }

    return 0;
}
