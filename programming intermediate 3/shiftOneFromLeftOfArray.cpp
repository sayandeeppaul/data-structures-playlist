#include <iostream>
#include <array>
using namespace std;

void shiftOneFromLeft(int arr[],int n){
    int temp =arr[0];
    int index=0;
    for(int j =1 ; j<n;j++){
        arr[index]= arr[j];
        index++;
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    shiftOneFromLeft(arr,length);
    return 0;
}
