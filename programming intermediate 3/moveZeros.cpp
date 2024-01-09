#include <iostream>

using namespace std;

void moveZeros(int arr[],int n){
    int temp[n]={0};
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            if(temp[index]==0){
                temp[index]=arr[i];
                index++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main()
{
    int arr[9] = {1,0,2,0,3,0,4,0,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,length);
    return 0;
}
