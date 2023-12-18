#include <iostream>
using namespace std;

int main ()
{
  int num;
  cout << "Enter the num : ";
  cin >> num;
  bool flag = false;
  for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
	{
	  flag = true;
	  break;
	}
    }
  if (flag == false)
    cout << "Number is prime";
  else
    cout << "Number is not prime";
  return 0;
}
