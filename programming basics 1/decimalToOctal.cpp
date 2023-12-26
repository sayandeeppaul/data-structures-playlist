#include<iostream>
using namespace std;

void convertOctal(int num)
{
    int temp=num;
    int octalArray[32];
    int i = 0;
    while (num > 0) {
        octalArray[i] = num % 8;
        num = num / 8;
        i++;
    }
    cout<<"The octal value of "<<temp<<" is "; 
    for (int j = i - 1; j >= 0; j--)
        cout << octalArray[j];
}
 
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    convertOctal(n);
    return 0;
}