#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[11]={2,2,2,2,4,5,6,2,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int half = len/2;
    for(int i=0;i<len;i++){
        int count =0;
        for(int j=0;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>half){
            cout<<"The Majority is : "<<arr[i];
            break;
        }
    }
    return 0;
}
