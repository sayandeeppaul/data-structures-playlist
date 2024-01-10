#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    for(int i=0;i<len;i++){
        int sum = 0;
        for(int j=i;j<len;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    cout<<"The maximum sum of the subarray is : "<<maxi;
    return 0;
}
