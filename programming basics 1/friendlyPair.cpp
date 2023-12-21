#include <iostream>
using namespace std;

int checkSum (int n)
{
  int s = 0;
  for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
	{
	  s = s + i;
	}
    }
  int d = s / n;
  return d;
}

int main ()
{
  int num1, num2;
  cout << "Please enter the first number : ";
  cin >> num1;
  cout << "Please enter the second number : ";
  cin >> num2;
  if (checkSum (num1) == checkSum (num2))
    cout << "Friendly pair";
  else
    cout << "Not a Friendly pair";

  return 0;
}
