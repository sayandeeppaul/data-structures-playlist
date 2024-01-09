#include <iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int totalSum=0;
    for(int i=1 ; i<=len ; i++){
        totalSum+=i;
    }
    int arraySum=0;
    for(int i =0 ; i<len-1;i++){
        arraySum+=arr[i];
    }
    int missingElem = totalSum - arraySum;
    cout<<"The missing element in the array is : "<<missingElem;

    return 0;
}
